# gfactiond

**Path:** [cnet/gfaction/](../cnet/gfaction/)
**Type:** standalone faction/guild game-logic server, three TCP listeners +
two outbound clients, ~150 files (including a generated-code
`operations/` subtree) + prebuilt binary (referenced by `build.sh`, not
present as a checked-in binary the way the other daemons' are)
**Counterparts:** `glinkd`/`gdeliveryd` (the real-time peers this daemon's
`GFactionServer` listener is built for) and a `gamedbd` at
`172.16.2.106:29400` (`GFactionDBClient`'s target, per `gamesys.conf`) —
**none of these three directories exist in this leak** (`gdeliveryd`'s
absence was already noted in [gauthd.md](gauthd.md); `glinkd` and `gamedbd`
are additional instances of the same gap, confirmed while writing this doc).
[uniquenamed](uniquenamed.md) is the one real, present counterpart — see
"Two-phase reservation against `uniquenamed`", below

## Purpose

`gfaction` ("Game Faction Daemon", binary name `gfactiond`) is the
authoritative server for faction/guild logic: creation, membership,
promotion/demotion, alliances and hostilities between factions, faction
chat, renaming, and faction-vs-faction battle/fortress features. Unlike
[gauthd](gauthd.md) or [gacd](gacd.md), whose declared protocol surface is
mostly stubbed, `gfaction` is a mature, largely-implemented system built
around a genuinely well-designed generic **operation/state-machine
framework** (`operations/`) that coordinates multi-step, multi-server
transactions — this is the most architecturally sophisticated of the
daemons documented so far.

Like `gamed` and `gauthd`, `gfaction` performs the
[licenseservice](licenseservice.md) handshake at startup
([gfaction.cpp:20-36](../cnet/gfaction/gfaction.cpp#L20)) — **this
contradicts a claim in `licenseservice.md`** that no `LicenseInterfaces::Init()`
call exists anywhere in `cnet/gfaction/`'s own sources; that claim was wrong
and has been corrected there as part of writing this doc. `gfaction` also
gates its DB connection behind a *second*, independent license check:
[gfactiondbclient.cpp](../cnet/gfaction/gfactiondbclient.cpp)'s
`OnAddSession`/`Reconnect` wrap themselves in `VM_BEGIN if (LIC_LOAD_FACTION)
{...} else { Close(sid); kill(0, SIGUSR1); }` — if the license doesn't grant
`LIC_LOAD_FACTION`, the process kills its own process group the moment its
DB connection attempt resolves, success or failure.

## Three listeners, two outbound clients

Started from [gfaction.cpp](../cnet/gfaction/gfaction.cpp)'s `main()`:

| Component | Role | Notes |
|---|---|---|
| `GFactionServer` | listener — the game-facing API, for `glinkd`/`gdeliveryd` | Tracks online players (`playermap`/`factionmembermap`) and registered link/delivery servers (`linksidmap`) in memory; loads a sensitive-word filter (`Matcher::Load` against the `filters` file) to reject profane/banned faction names at creation time |
| `GProviderServer` | listener — registers connecting "game servers" (`gameservermap`, keyed by an id `main()` requires to be in **101–200**, read from `[ProviderServerID]`) | Lets `gfaction` dispatch/broadcast protocols back to specific `gamed` instances by id |
| `GFactionDBClient` | outbound client → a "faction DB" server at `172.16.2.106:29400` (per `gamesys.conf`) | Persists faction data; see the `LIC_LOAD_FACTION` gate above. The target directory (presumably `gamedbd`) isn't present in this leak, same absence pattern as `gdeliveryd` |
| `UniqueNameClient` | outbound client → [uniquenamed](uniquenamed.md) | **Only started when `is_central_faction` is false** — see "Central vs. per-zone factions", below |

`is_central_faction` (config `[GFactionServer] is_central_faction=true`) is
read once at startup and exposed via `IsCentralFaction()`.

## The `Operation`/`OperWrapper` framework

This is the architectural core, in
[cnet/gfaction/operations/](../cnet/gfaction/operations/) — a small
code-generation-adjacent framework (`opgen.pl`/`opgen.xml` exist there, but
the generated `.h`/`.inl` pairs are checked in directly, one pair per
faction action):

- **`Operation`** ([operation.h](../cnet/gfaction/operations/operation.h))
  is the base class for one faction action type (`_O_FACTION_CREATE`,
  `_O_FACTION_DISMISS`, `_O_FACTION_LEAVE`, `_O_FACTION_EXPEL_MEMBER`,
  `_O_FACTION_APPOINT`, `_O_FACTION_DEGRADE`, `_O_FACTION_RESIGN`/
  `MASTERRESIGN`, `_O_FACTION_RENAME`, `_O_FACTION_UPGRADE`,
  `_O_FACTION_CHANGE_PROCLAIM`, `_O_FACTION_BROADCAST`, `_O_FACTION_ACCEPT_JOIN`,
  alliance/hostile apply+reply pairs, relation removal apply+reply,
  list-member/list-relation queries, expel-schedule accelerate/cancel, and a
  sync test op — ~25 concrete `Op*` subclasses total). Each self-registers
  into a static type→instance map and is cloned per request
  (`Operation::Create(type)`).
- **`OperWrapper`** ([operwrapper.h](../cnet/gfaction/operations/operwrapper.h))
  is a reference-counted (`HardReference`/`WeakReference`), timer-driven
  state machine wrapping one in-flight operation, cycling through
  `OpInitState → OpSyncState → OpAddInfoState → OpExecuteState → OpEndState`
  (each with its own timeout policy). It carries three kinds of context: the
  raw client params, `FactionOPSyncInfo` (data the local game server must
  confirm/sync), and `FactionOPAddInfo` (data from an external server —
  concretely, `uniquenamed`'s reservation result).
- **Entry point:** a player action arrives as either the generic
  `FactionOPRequest(roleid, optype, params)` or a handful of dedicated
  one-shot protocols (e.g. `FactionCreate`); the handler just calls
  `OperWrapper::CreateWrapper(roleid, optype)`, sets the params, and calls
  `Execute()` — the state machine takes it from there
  ([factionoprequest.hpp](../cnet/gfaction/factionoprequest.hpp)).
- **Access control:** `Operation::PrivilegeCheck()` consults
  [`Privilege`](../cnet/gfaction/operations/privilege.h), a static
  role→allowed-operations table (faction rank, e.g. master/officer/member,
  mapped to a `std::set<Operations>`) — a real, if simple, RBAC layer absent
  from every other daemon documented so far.

`OpCreate` ([opcreate.h](../cnet/gfaction/operations/opcreate.h)/
[opcreate.inl](../cnet/gfaction/operations/opcreate.inl)) is a representative
example: `PrivilegeCheck` requires the player not already be in a faction;
`ConditionCheck` requires level ≥ 20 and ≥ 100,000 money; `QueryAddInfo`
validates the name against `Matcher` (profanity filter) and length, then
asks `uniquenamed` to reserve it; `Execute` (run once the reservation result
arrives) creates the faction row via `Factiondb::CreateFaction`; `SetResult`
(run once that DB write's own async result arrives) deducts the creation
cost, promotes the player to faction master, replies to the client via
`gfs_send_factioncreate_re`, and — critically — **confirms or rolls back the
name reservation** via `Send2UNS()` → `uns_send_postcreatefaction()` either
way.

## Two-phase reservation against `uniquenamed`

This resolves an open question from [uniquenamed.md](uniquenamed.md) and
[gauthd.md](gauthd.md), both of which found *no* code anywhere in this leak
that actually called `uniquenamed`'s reservation RPCs — only config evidence
(`gamesys.conf`'s `[UniqueNameClient]` section) that `gfaction` was the
intended caller. **It is** — but the calling code is easy to miss: the
`.hrp` files' own `Client()` methods (`PreCreateFaction::Client()`,
`PostCreateFaction::Client()`, etc.) are themselves empty or
callback-forwarding stubs, matching the pattern seen everywhere else in this
codebase. The *actual* sends happen through a separate
`uns_send_precreatefaction`/`uns_send_postcreatefaction`/
`uns_send_postdeletefaction`/`uns_send_prefactionrename`/
`uns_send_postfactionrename` helper family declared in
[gfs_io.h](../cnet/gfaction/gfs_io.h), called directly from the `Op*`
classes in `operations/` (e.g. `OpCreate::Send2UNS`, above). The "post"
variants curiously go through the RPC's own `OnTimeout(Rpc::Data*)` method
as a fire-once send trigger (`postcreatefaction.hrp`,
`postdeletefaction.hrp`) rather than a normal call — an unusual but
apparently deliberate reuse of that hook, consistent across both files.
Net effect: **`gfaction` does correctly complete the reserve → commit/rollback
cycle** described in `uniquenamed.md`'s two-phase protocol, for faction
creation, deletion, and (partially — see Oddities) renaming.

## Central vs. per-zone factions

`is_central_faction` changes two things: whether `UniqueNameClient` is
started at all, and (implicitly, per the comment in `gfaction.cpp`, "faction
server's ID must be 101–200") how this instance is addressed by `gamed`
instances via `GProviderServer`. The implication — not fully verifiable
from this leak alone — is a hub-and-spoke deployment: one "central" `gfaction`
instance is the uniqueness/naming authority (or defers to a `uniquenamed`
that only it talks to), while per-zone instances register as providers and
go through `UniqueNameClient` to reserve names against the shared registry.

## Faction relations & economy

[factiondb.h](../cnet/gfaction/factiondb.h) defines the hardcoded economy for
inter-faction relations: alliance apply/agree/disagree fees, hostile
apply/agree/disagree fees (all multiples of 3,000,000 in-game currency),
forced relation-removal costing 6,000,000, an `OP_COOLDOWN_TIME` of 1800s
between operations, a 24h (`APPLY_TIMEOUT=86400`) window for a pending
apply to be answered, a 30-day (`RELATION_DURATION=2592000`) relation
lifetime, and a 72-hour delayed-expel grace period. `Factiondb` (the
1792-line [factiondb.cpp](../cnet/gfaction/factiondb.cpp)) is the in-memory +
`GFactionDBClient`-backed store for all of this — by far the largest single
file in the directory.

## Renaming: a third two-phase flow, against the game server itself

Beyond the `uniquenamed` name reservation, a faction rename also runs a
**separate** confirm step against the owning `gamed` instance:
[factionrenamegsverify.hpp](../cnet/gfaction/factionrenamegsverify.hpp)/
[_re.hpp](../cnet/gfaction/factionrenamegsverify_re.hpp) — the game server
must verify/apply the rename locally before `gfaction` calls
`uns_send_postfactionrename()` to finalize it with `uniquenamed`. So a
faction rename in this codebase involves three parties in sequence:
`uniquenamed` (reserve), `gamed` (verify), `uniquenamed` (confirm) —
consistent with `uniquenamed.md`'s finding that `PostFactionRename` is
otherwise a dead stub on the `uniquenamed` side; here's the caller that
would exercise it, when the flow completes successfully.

## Embedded Lua — the same module as `gauthd`, mislabeled the same way

[luaman.cpp](../cnet/gfaction/luaman.cpp) is effectively identical to
[gauthd's](gauthd.md#embedded-lua) — same header comment ("PW LUA SCRIPT
**GDELIVERYD** (C) DeadRaky 2022" — still the wrong daemon name, still no
`gdeliveryd` in this leak to have originated it from), same
`game__Patch`/`game__Get` raw-memory hooks exposed to script, same
`Init`/`Update`/`HeartBeat` event dispatch and hot-reload-by-mtime loop
(minus `gauthd`'s login-specific `EventOnUserLogin`, which doesn't apply
here). This is now the **second** daemon in this leak carrying this exact
copy-pasted module under the same incorrect attribution — worth treating as
one shared component rather than two independent findings.

## Build

- No `Makefile` exists anywhere in `cnet/gfaction/` — same gap as every
  other daemon documented so far — despite `build.sh` invoking `make` for it
  in two places ([build.sh:288-294](../build.sh#L288) and
  [build.sh:335-338](../build.sh#L335)) and installing to
  `/home/gfactiond/gfactiond` ([build.sh:102](../build.sh#L102)). **Unlike
  every other daemon in this leak, no prebuilt `gfactiond` binary is checked
  in either** — `cnet/gfaction/` ships source only.
- Before compiling, `build.sh` copies `operations/*.h`, `operations/*.hxx`,
  and `operations/*.cxx` into `cnet/gfaction/` itself
  ([build.sh:292](../build.sh#L292)) — the only codegen-staging step seen in
  any of these daemons' build recipes. It does **not** copy `operations/*.inl`
  (each `Op*.h` `#include`s its matching `.inl` directly, so this only works
  if `operations/` is also on the compiler's include path — plausible, given
  no Makefile survives to confirm it) or `operations/operwrapper.cpp` (whose
  compiled object `OperWrapper`'s non-inline methods depend on) — whether
  that file gets picked up some other way, or the shipped build recipe is
  simply incomplete, isn't resolvable from this leak.

## Oddities

- **`licenseservice.md` incorrectly stated no `LicenseInterfaces::Init()`
  call exists in `cnet/gfaction/`** — it does, in `gfaction.cpp`, and has
  been corrected there.
- **Two independent license kill-switches**: the standard startup handshake
  (shared with `gamed`/`gauthd`) and a second, separate `LIC_LOAD_FACTION`
  check gating the DB client connection — see Purpose.
- **`operations/` build-copy step omits `.inl` and `operwrapper.cpp`** — see
  Build.
- **No checked-in prebuilt binary** for this daemon, unlike every other one
  documented in this series.
- **The `LuaManager` module is a verbatim copy of `gauthd`'s**, still
  mislabeled "GDELIVERYD" in both places — see "Embedded Lua".
- **`gfaction.conf` and `gamesys.conf` are inconsistent** sample configs:
  `gfaction.conf` has no `[GFactionDBClient]` or `[UniqueNameClient]`
  section at all (both of which `gfaction.cpp` reads unconditionally, one of
  them gated by a license check that kills the process rather than merely
  logging an error), while `gamesys.conf` has both, plus real target
  addresses (`172.16.2.106:29400`, and whatever `uniquenamed` deployment
  matches `gfaction`'s zone) — same "sample vs. real deployment config"
  split seen in `gacd`'s `gamesys.conf`/`io.conf` pair.
- **`GFactionDBClient`'s target (`gamedbd`) has no source in this leak**,
  the same absence pattern already documented for `gdeliveryd` in
  `gauthd.md`.
