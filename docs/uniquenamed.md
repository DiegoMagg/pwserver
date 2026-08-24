# uniquenamed

**Path:** [cnet/uniquenamed/](../cnet/uniquenamed/)
**Type:** standalone RPC-style TCP daemon backed by an embedded transactional
key/value store, doubling as an offline DB admin CLI (28 files + prebuilt
10.9MB binary)
**Counterpart:** [cnet/gfaction/gamesys.conf](../cnet/gfaction/gamesys.conf)
declares a `[UniqueNameClient]` pointed at this service's port, but — as with
[gauthd](gauthd.md) — no source file anywhere in this leak actually
constructs or sends any of `uniquenamed`'s RPC request classes

## Purpose

`uniquenamed` is the cross-zone uniqueness authority for three name spaces:
character (role) names, faction names, and family names. Every zone/world
server is expected to reserve a name here before creating a role/faction/
family locally, and confirm (or release) that reservation once the local
create actually succeeds or fails — the classic two-phase "reserve, then
commit" pattern, needed because names must be unique *across every zone*,
not just within one. It also owns a global numeric ID space (`logicuid`)
used to mint cross-zone-unique role ids. Unlike `licenseservice`/`logservice`/
`gauthd`, this daemon's core logic is **mostly real and implemented**, not
stubbed — the interesting findings here are in a few places where the logic
is subtly broken or was later disabled, not simply absent.

## Key files

| File | Role |
|---|---|
| [uniquenamed.cpp](../cnet/uniquenamed/uniquenamed.cpp) | `main()` — parses either a long list of **CLI subcommands** for offline DB administration (see below) or, with no subcommand, opens the storage env and starts `UniqueNameServer` as a `Protocol::Server` plus a periodic `LogicuidSeeker` task and a DB backup thread |
| [uniquenameserver.hpp](../cnet/uniquenamed/uniquenameserver.hpp)/[.cpp](../cnet/uniquenamed/uniquenameserver.cpp) | `UniqueNameServer`: the listener/session manager (no auth fields at all — see Oddities). `RoleList`: a 16-bit-in-a-32-bit-int bitmap of a user's role slots (`MAX_ROLE_COUNT=16`). `LogicuidManager`/`LogicuidSeeker`: the global id allocator (see below) |
| [accessdb.h](../cnet/uniquenamed/accessdb.h)/[accessdb.cpp](../cnet/uniquenamed/accessdb.cpp) (1350 lines) | Every CLI subcommand's implementation — direct storage-env reads/writes, CSV export/import, and cross-database merge |
| [callid.hxx](../cnet/uniquenamed/callid.hxx) | 15 `CallID` (RPC) ids + 3 `ProtocolType` (one-way) ids |
| [state.hxx](../cnet/uniquenamed/state.hxx)/[state.cxx](../cnet/uniquenamed/state.cxx) | Single session state `state_UniqueNameServer` accepting all 18 protocols, 86400s (24h) timeout |
| [stubs.cxx](../cnet/uniquenamed/stubs.cxx) | Static registration of every protocol class |
| `precreate*`/`postcreate*`/`postdelete*`/`pre*rename`/`post*rename` (`.hrp`/`.hpp`) | The reservation protocol, one triplet-ish set per name space — see "Two-phase reservation", below |
| [rolenameexists.hrp](../cnet/uniquenamed/rolenameexists.hrp), [userrolecount.hrp](../cnet/uniquenamed/userrolecount.hrp) | Read-only lookups: does a role name exist / how many roles (and which slots) does a user have |
| [dbrawread.hrp](../cnet/uniquenamed/dbrawread.hrp) | Generic raw key/value browse-or-fetch over any internal storage table — see "No authentication", below |
| [moverolecreate.hrp](../cnet/uniquenamed/moverolecreate.hrp) | Cross-zone role-migration RPC — **entirely commented out**, see Oddities |
| [keepalive.hpp](../cnet/uniquenamed/keepalive.hpp) | One-way ping; `Process()` just logs |
| [uniquenamed.conf](../cnet/uniquenamed/uniquenamed.conf) | Listener + storage config — see Config |

## Two-phase reservation protocol

The pattern, illustrated by role creation
([precreaterole.hrp](../cnet/uniquenamed/precreaterole.hrp) /
[postcreaterole.hrp](../cnet/uniquenamed/postcreaterole.hrp)):

1. **`PreCreateRole(zoneid, userid, rolename)`** — checks the `unamerole`
   table for a collision, allocates a free role slot in the user's
   `RoleList` bitmap (from `uidrole`), assigns a `logicuid` (see below) if the
   user doesn't have one yet, writes `unamerole[rolename] = (zoneid,
   logicuid+slot, ENGAGED, now)`, and returns `roleid = logicuid + slot`.
2. The calling zone server actually creates the role locally using that
   `roleid`.
3. **`PostCreateRole(success, zoneid, roleid, userid, rolename)`** — on
   success, flips the record to `USED`; on failure, **deletes** the
   `unamerole` entry and frees the role slot back in `uidrole` — a real
   rollback.

The same shape repeats for factions
([precreatefaction.hrp](../cnet/uniquenamed/precreatefaction.hrp) /
[postcreatefaction.hrp](../cnet/uniquenamed/postcreatefaction.hrp), sequential
`factionid` from a counter record instead of a `logicuid`) and families
([precreatefamily.hrp](../cnet/uniquenamed/precreatefamily.hrp) /
[postcreatefamily.hrp](../cnet/uniquenamed/postcreatefamily.hrp)) — all three
are otherwise byte-for-byte the same logic with the noun swapped.

Deletion has **no pre-step** — `PostDeleteRole`/`PostDeleteFaction`/
`PostDeleteFamily` just remove the name record and free the role slot
directly; there's nothing to reserve when giving a name back.

Renaming is asymmetric across the three name spaces:

| Name space | Pre-rename (RPC) | Post-rename (one-way) |
|---|---|---|
| Role | [preplayerrename.hrp](../cnet/uniquenamed/preplayerrename.hrp) — implemented | [postplayerrename.hpp](../cnet/uniquenamed/postplayerrename.hpp) — implemented (marks old name `OBSOLETE`, new name `USED`, or deletes the new-name reservation on failure) |
| Faction | [prefactionrename.hrp](../cnet/uniquenamed/prefactionrename.hrp) — implemented | [postfactionrename.hpp](../cnet/uniquenamed/postfactionrename.hpp) — **`// TODO`, empty** |
| Family | not present at all | not present at all |

So a faction can reserve a new name via `PreFactionRename` but the daemon has
no code path to ever confirm or roll that reservation back, and families
can't be renamed through this service at all.

## Bug: the "stale reservation" reclaim path is dead code

Every `Pre*` handler (`PreCreateRole`, `PreCreateFaction`, `PreCreateFamily`,
`PrePlayerRename`, `PreFactionRename`) contains this shape when it finds an
existing name record:

```cpp
if( !(UNIQUENAME_ENGAGED == status && Timer::GetTime() - time > 300) )
{
    res->retcode = ERR_DUPLICATRECORD;
    return;
}
else
{
    res->retcode = ERR_DUPLICATRECORD;   // <- same as above
    return;
}
```

Both branches of the `if`/`else` set the same error code and `return` —
the only difference is a log message (`"duplicate"` vs `"duplicate2"`, or
identical text in the faction variants). The evident intent was: if a name
is `ENGAGED` (reserved but never confirmed) for more than 300 seconds —
i.e. the zone server that reserved it crashed or lost the connection before
sending the matching `Post*` — treat it as abandoned and let a new reservation
overwrite it. As written, that reclaim never happens: **any name that is
ever reserved via a `Pre*` call and never confirmed becomes permanently
unusable**, with no code path in this leak that frees it. This affects
role, faction, and family creation, and player/faction renaming alike.

## `LogicuidManager`: the global id allocator

Role ids aren't simply `userid + slot` (that older scheme survives only in
the dead `MoveRoleCreate` code, see Oddities) — they're `logicuid + slot`,
where `logicuid` is a per-user base value from an independent global pool:

- `LogicuidManager::FindFreeLogicuid()` scans the `logicuid`/`uidrole`
  tables in steps of 16 (`MAX_ROLE_COUNT`) starting from a persisted cursor
  (stored under key `0` in the `logicuid` table), looking for ids not
  already claimed, up to 4096 candidates or until it has queued 256 free
  ids; it self-throttles via a `busy` flag so only one scan runs at a time.
- `LogicuidManager::AllocLogicuid()` pops one id off the in-memory queue and,
  once the queue drops to ≤128, kicks off a background `LogicuidSeeker` task
  to refill it — `uniquenamed.cpp`'s `main()` also runs one unconditionally
  every 5 seconds via `Thread::HouseKeeper::AddTimerTask`.

## No authentication

`UniqueNameServer` has no shared-key/challenge field anywhere in its config
or session setup — any TCP peer that can reach the configured port can call
every RPC. Concretely, that means:

- `zoneid`/`userid`/`factionname`/etc. are all client-supplied with no
  binding to which zone the connection actually is — nothing stops a peer
  from squatting, deleting, or renaming another zone's role/faction/family
  names.
- **`DBRawRead`** ([dbrawread.hrp](../cnet/uniquenamed/dbrawread.hrp)) lets a
  caller browse or point-fetch raw key/value pairs from any internal storage
  table by name — dumping the entire `unamerole`/`unamefaction`/
  `unamefamily`/`uidrole`/`logicuid` tables is just a matter of paging
  through with the returned cursor `handle`. Its table allow-list
  (`Tables::checkTable`) is compiled in **only when `USE_WDB` is defined** —
  without that build flag the check is a no-op that accepts any table name.
  No `Makefile` survives in this leak (see Build) to confirm which way this
  was actually built.

## CLI / offline admin mode

Run with no recognized subcommand, `uniquenamed <conf>` starts the daemon.
Run as `uniquenamed <conf> <subcommand> [args]`, it instead performs one
admin operation directly against the storage files and exits — all
implemented in [accessdb.cpp](../cnet/uniquenamed/accessdb.cpp):

- **Inspect:** `showinfo` (dumps the `logicuid`/faction/family next-id
  counters), `queryuser <id>`, `queryrolebyname`/`queryfactionbyname`/
  `queryfamilybyname <name>`.
- **Force-set counters:** `setlogicuidnextid`/`setfactionnextid`/
  `setfamilynextid <nextid>`.
- **Direct writes:** `addlogicuid <userid> <logicuid>`, `addrole`/
  `addfaction`/`addfamily <name> <zoneid> <id> <status>` — bypasses the
  RPC protocol (and its reservation semantics) entirely.
- **Bulk export/import:** `exportcsv{logicuid,roleid,rolename,faction,family}`
  and the matching `importcsv*` commands.
- **`importrolelist <userid> <rolelist-hex>`** — ORs a role bitmap into an
  existing user's `uidrole` record (doesn't touch `unamerole`, so this can
  desync the two).
- **`merge <srcpath>`** (`MergeDBAll`) — walks a *second* set of
  `logicuid`/`uidrole`/`unamerole`/`unamefaction`/`unamefamily` database
  files at `srcpath` and merges every record into the currently-open
  database — evidently for consolidating multiple zones' or a previous
  deployment's `uniquenamed` data into one.

## Config

[uniquenamed.conf](../cnet/uniquenamed/uniquenamed.conf) listens on TCP
`0.0.0.0:29401`, and — notably, in contrast to `gauthd.conf` and
`logclient.conf` — ships working **`[LogclientClient]`/[LogclientTcpClient]`**
sections pointed at `172.16.2.2:11100`/`11101`, which correctly match
[logservice](logservice.md)'s actual listen ports (unlike the sample
`cnet/logclient/logclient.conf`, which targets 11102/11103 instead). That's
evidence `uniquenamed` is meant to forward its logs to `logservice` over the
network, same as `gamed` — worth revisiting the "gamed is the only consumer
of `logclient` in this leak" note in `logservice.md` if this daemon's actual
link-time dependencies are ever confirmed (no `Makefile` survives here to
settle it either way).

`[storage]`/`[storagewdb]` configure the embedded transactional key/value
env (paths, cache size, checkpoint interval, backup interval/lockfiles) —
the same `StorageEnv`/`Storage` abstraction used elsewhere in this stack for
persistent state. `[storagewdb].tables` lists only `config, uidrole,
unamefaction, unamerole` — `unamefamily` and `logicuid` are conspicuously
absent from that allow-list even though both tables are read/written
elsewhere in this same daemon (see `DBRawRead`, above).

## Build

- No `Makefile` exists anywhere in `cnet/uniquenamed/` in this leak — the
  same gap as `licenseservice`, `logservice`, and `gauthd` — despite
  `build.sh` invoking `cd uniquenamed; make clean; make -j32` for it in
  **two** separate build functions
  ([build.sh:272-276](../build.sh#L272) and
  [build.sh:319-323](../build.sh#L319)) and copying the result to
  `/home/uniquenamed/uniquenamed` in the install step
  ([build.sh:104](../build.sh#L104)). A prebuilt 10.9MB binary ships
  regardless.

## Oddities

- **The stale-`ENGAGED`-reservation reclaim logic is dead code** in every
  `Pre*` handler — see "Bug", above. This is the most consequential finding
  in this daemon: a crashed or dropped reservation permanently squats a
  name with no recovery path short of manual DB surgery (the CLI's
  `addrole`/`addfaction`/`addfamily` could be used to overwrite a stuck
  record by hand, but nothing does so automatically).
- **`MoveRoleCreate`** (`RPC_MOVEROLECREATE`, id 3415) is accepted by the
  session state machine but its entire `Server()` body is wrapped in a
  block comment — the handler compiles to an empty function. Unlike the
  other daemons' one-line `// TODO` stubs, this one is a fully-written
  cross-zone role-migration implementation that was deliberately disabled;
  its commented-out logic still computes `roleid = userid + slot` — the
  older scheme predating `LogicuidManager` — suggesting it was turned off
  around the same time the `logicuid` allocator was introduced, and never
  ported over.
- **No authentication anywhere** on the main listener — see "No
  authentication", above.
- **`PostFactionRename` is an empty stub** while `PrePlayerRename`,
  `PostPlayerRename`, and `PreFactionRename` are all fully implemented —
  faction renaming is reservation-only, with no confirm/rollback step in
  this leak. Family renaming isn't implemented at any stage.
- **`[storagewdb].tables` omits `unamefamily` and `logicuid`** even though
  both are live tables the daemon itself reads and writes — if `USE_WDB`
  builds gate `DBRawRead` by this list (see "No authentication"), those two
  tables would be unreachable through that RPC even though every other
  table is; if `USE_WDB` isn't defined, the omission doesn't matter because
  the allow-list is compiled out entirely.
