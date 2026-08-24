# gacd

**Path:** [cnet/gacd/](../cnet/gacd/)
**Type:** standalone anti-cheat daemon, two TCP listeners, ~145 files + prebuilt
18.9MB binary
**Counterpart:** [cnet/gacdclient/](../cnet/gacdclient/) — a real, present
admin CLI that speaks the control protocol (`Commander`,
`GAntiCheaterClient`) — unlike `gauthd`/`uniquenamed`, this daemon's client
*is* in the leak, at least for the admin side (see "The two listeners",
below, for what's still missing)

## Purpose

`gacd` ("Game AntiCheat Daemon") is the server-side half of an active,
in-process anti-cheat system: it periodically pushes small pieces of native
machine code ("code pieces") to be executed inside the game client's
process, collects the results (memory-pattern scans, forbidden
process/window/module string lists, mouse-input statistics, thread/CPU
timing, hook/API-loader status), and punishes accounts whose answers don't
match what's expected or who stop answering. It also exposes a full
remote-code-push channel (`ACRemoteExe`) that can upload and run an
arbitrary native payload against a specific player. This is a materially
different daemon from the other three documented so far
([licenseservice](licenseservice.md), [logservice](logservice.md),
[gauthd](gauthd.md), [uniquenamed](uniquenamed.md)): its core detection
pipeline is real and non-trivial, and the interesting findings are mostly
architectural/config details rather than "empty stub" gaps — though those
exist here too, just less centrally.

## The two listeners

Both are `Protocol::Manager` singletons started from
[gacd.cpp](../cnet/gacd/gacd.cpp), each accepting exactly **one** active
peer at a time (a second connect attempt is closed — see `ACWhoAmI` below):

| Manager | Port (conf) | Session state | Single peer role |
|---|---|---|---|
| `GAntiCheaterServer` | 29702 | `state_ACServer` (86400s) | the **delivery** link — the game-facing side. No source for this peer exists in this leak (same gap as `gdeliveryd` noted in [gauthd.md](gauthd.md)); config evidence (`gacdutil.h`'s `USERID2ACCOUNTID` masking, `GMKickoutUser` targeting) implies it's meant to be a delivery/world-facing process tunneling real players' anti-cheat traffic |
| `GACControlServer` | 29712 | `state_ACControlServer` (86400s) | the **control/admin** link — driven by `cnet/gacdclient`'s interactive `Commander` REPL (see Counterpart) |

A connecting peer on **either** port sends `ACWhoAmI(clienttype)` to
identify itself as `_DELIVERY_CLIENT` or `_CONTROL_CLIENT`
([acwhoami.hpp](../cnet/gacd/acwhoami.hpp)) — the handler then calls
`GAntiCheaterServer::SetDeliverSID(sid)` or
`GACControlServer::SetControlSID(sid)` based purely on the client's claimed
type, **not** on which manager actually received the connection. A client
that connects to the control port and declares itself `_DELIVERY_CLIENT`
would have its `sid` handed to the *other* manager's session table — likely
just a failed `Send()` (session id not found there) rather than anything
exploitable, but it's a real cross-manager mixup with no validation tying
identity to transport.

## Anti-cheat pipeline

Per connected player, a `UserSessionData` owns a `UserCodeManager`
([usercodemanager.hpp](../cnet/gacd/usercodemanager.hpp)/[.cpp](../cnet/gacd/usercodemanager.cpp)):

1. **`CodeProviderManager`** aggregates three `CodeProvider` sources —
   [ForbidLibrary](../cnet/gacd/forbidlibrary.hpp) (forbidden-string/process
   checks), [MemPatternLibrary](../cnet/gacd/mempatternlibrary.hpp)
   (in-memory byte-pattern scans), and
   [DebugCodeLibrary](../cnet/gacd/debugcodelibrary.hpp) (debugger-detection
   probes) — all loaded from `gacd.xml`, shuffled into one `SendingQueue`.
2. On a randomized interval (`m_iMinCodeInterval`..`m_iMaxCodeInterval`
   seconds, configurable, plus an optional one-time "welcome code" fired
   shortly after login), `UserCodeManager::OnTimer()` pops the next code,
   builds its `CodePieceVector`, and sends it as `ACRemoteCode` through
   `GAntiCheaterServer` (i.e. down the delivery tunnel to the actual
   client), recording it in `m_waitingCodeMap` keyed by a randomized
   sequence number (`s_iCodeSeq`, reseeded from `time(NULL)` per round).
3. The client is expected to execute the code and report back. **The
   dedicated envelope protocols for this — `ACQuestion`, `ACAnswer`,
   `ACTriggerQuestion`, `ACRemoteCode`, `ACQCodeRes` — all have empty
   `// TODO` `Process()` bodies** in this leak. The real path is different:
   the client batches results into a single, zlib-compressed, tagged
   **`ACReport`** message (`ACReport::Process()` *is* implemented — it just
   calls `ReportInfo::DeliverReport(roleid, report)`), whose first decoded
   byte (`cInfoType`) selects one of nine sub-record types
   (`INFO_STACK`/`INFO_MOUSE`/`INFO_MEMORY`/`INFO_PROCESSTIMES`/
   `INFO_THREADSTIMES`/`INFO_PLATFORMVERSION`/`INFO_APILOADER`/
   `INFO_MODULES`/`INFO_PROCESSLIST`/`INFO_WINDOWLIST`) implemented in
   [reportinfo.cpp](../cnet/gacd/reportinfo.cpp). `INFO_APILOADER` decodes to
   `APIResInfo`, whose `VisitData()` calls
   `UserSessionData::CheckCodeRes(codeID, result)` for each result pair —
   **that's** the actual code-answer path; the standalone
   `ACAnswer`/`ACQCodeRes` protocol classes appear to be unused/legacy wire
   shapes.
4. `UserCodeManager::CheckRes()` looks the sequence number up in
   `m_waitingCodeMap`, runs the associated `CodeResChecker::DoCheck()`
   (e.g. `CodeResCheckerWithAnswer` — commit a cheat if the result doesn't
   equal the expected answer), and on a positive hit calls
   `UserSessionData::CommitCheater(cheatID, subID)`. An **unrecognized**
   sequence number, or one arriving after too many prior timeouts, is
   itself treated as suspicious (`Cheater::CH_CODE_UNKNOWN`). A code that
   never answers within `m_iTimeOut` ticks commits `CH_CODE_TIMEOUT`; too
   many consecutive timeouts (`m_iMaxTimeoutCodeCount`) commits
   `CH_NO_CODE_RES` and force-kicks via `AssureOnline(false)`.

`Cheater` ([cheater.hpp](../cnet/gacd/cheater.hpp)) enumerates the full
catalog of detectable offenses — forbidden strings/memory patterns, decode
errors, client-info frequency/order anomalies, "flash" (window-flicker)
abuse, unknown/timed-out/overspeed code responses, multi-login, and a
distinguished `CH_VIP_USER`/`RefusePunish()` exemption path
(`m_iUserType != 0`, set when a code matching `m_iVIPCodeID` answers
correctly — effectively a server-side allowlist code that opts an account
out of further punishment for the session).

## Remote code execution (`ACRemoteExe`)

Beyond the periodic scan codes, the control channel can push and run an
**arbitrary native payload** against one `roleid`
([acremoteexe.hpp](../cnet/gacd/acremoteexe.hpp)):

- **`REMOTEEXE_MAKE`** splits an uploaded blob into up to `PIECE_NUM=32`
  chunks of `PIECE_SIZE=1920` bytes (≈61KB max), each wrapped as a
  `CodePiece` with sequential ids starting at `PIECE_BEGIN=4000`, and sends
  them one `ACRemoteCode` at a time.
- **`REMOTEEXE_RUN`/`REMOTEEXE_MOVE`** builds a fixed prepared-code template
  named `"hammer"` (from [PreparedCodeLibrary](../cnet/gacd/preparedcodelibrary.hpp),
  loaded from `gacd.xml`'s `<codemanager><precodes>`), patches the
  previously-uploaded file's size into a well-known code piece (id `1984`,
  offset `565`), and sends that — i.e. `"hammer"` is a loader stub that runs
  the file assembled by a prior `MAKE`.
- **`REMOTEEXE_CLEAN`** overwrites all 32 piece slots with empty payloads to
  wipe the uploaded code from the client side.

`CodePiece` ([codepiece.hpp](../cnet/gacd/codepiece.hpp)) is the wire unit:
a small header (`size`, `id`, `type`) plus raw bytes, with a `type` of
`CPT_RUN`/`CPT_RUN_IN_THREAD` telling the client to execute rather than just
store the payload, and helper methods (`PatchInt`/`PatchShort`/`PatchData`)
for binary-patching a piece in place — used exactly as shown above to inject
a runtime-computed file size into the "hammer" loader. Whatever
authentication exists for this channel is entirely at the transport layer
(see Config, below) — there's no additional check in `ACRemoteExe::Process()`
itself once a session has been accepted as `_CONTROL_CLIENT`.

## Punishment

`UserSessionData::CommitCheater()` forwards to
[PunishManager::DeliverCheater()](../cnet/gacd/punishmanager.cpp), which
matches the `Cheater` against a `BindMap` (bound either by cheat-id alone or
by cheat-id+sub-id, cheat-id+sub-id taking priority) to a `KickRule` —
three punishment tiers (`FT_CLASS=3`) with an escalating forbid-time
schedule, and a randomized delay (`FDT_MIN=30`..`FDT_MAX=60` seconds by
default) before the kick actually fires, presumably to make it harder for a
cheat's author to correlate which detection triggered the ban.
`KickPunisher::Process()` ([punisher.cpp](../cnet/gacd/punisher.cpp)) builds
a `GMKickoutUser` (`gmroleid = 1984`, the same sentinel id seen in the
`ACRemoteExe`/"hammer" patch above, reused here as a "system/GM" actor id;
`kickuserid` is masked through `USERID2ACCOUNTID` — `userid & 0xfffffff0`,
stripping the low nibble that presumably encodes the role slot) with a
GBK→UTF-converted reason string, and sends it to whatever holds
`deliver_sid` — again, `GMKickoutUser::Process()`/`_Re::Process()` are empty
stubs in `gacd` itself, since this message is meant to be acted on by the
delivery peer, not `gacd`.

## Config

[gamesys.conf](../cnet/gacd/gamesys.conf) and [io.conf](../cnet/gacd/io.conf)
are near-duplicate deployment profiles (the only real difference is
`GAntiCheaterServer`'s bind address: `127.0.0.1` in `gamesys.conf` vs.
`0.0.0.0` in `io.conf`). Both show a striking asymmetry in the two
listeners' transport-level crypto:

- **`GACControlServer`** (the remote-code-execution channel) has real,
  non-trivial `isec`/`iseckey`/`osec`/`oseckey` values set
  (`iseckey=fmct9clmTwkjupohogomtpfJccb1ac`,
  `oseckey=pvlSyt2jikh0glUsnabfgdsflmmntq`) — this channel is actually
  keyed.
- **`GAntiCheaterServer`** (the delivery/game-facing channel) has the same
  four settings present **but commented out** — this channel runs with no
  transport-level encryption/authentication at all as shipped.

`[Other] zoneid=16` is echoed back to a newly-connected control client as
`ACConnectRe.aid` ([gaccontrolserver.cpp](../cnet/gacd/gaccontrolserver.cpp)).
Both files also carry `[LogclientClient]`/`[LogclientTcpClient]` sections
pointed at `127.0.0.1:11100`/`11101` — see [logservice.md](logservice.md);
this is the same "daemon forwards its own logs to `logservice`" pattern
already flagged in `uniquenamed.md`.

## Counterpart: `gacdclient`

[cnet/gacdclient/](../cnet/gacdclient/) is a real, present interactive admin
tool — `Commander` ([commander.cpp](../cnet/gacdclient/commander.cpp)) reads
stdin commands (`reload`/`reload_stat`/`reload_log`/`reload_code`,
`logs`/`strs`, `who`, `forbidprocess`, `patternbrief`, `cheaters`,
`patterns`, `periods`, `sendcode`, `platforminfo`, `help`, `quit`/`exit`)
and drives them over `GAntiCheaterClient` as `ACQuery`/`ACRemoteExe`/
`ACSendCode`/`ACReloadConfig` requests — this is the tool an operator would
use to inspect and punish players by hand, and to push remote-exe payloads.
Its `main()` ([gacdclient.cpp](../cnet/gacdclient/gacdclient.cpp)) also
contains an odd, undocumented startup routine unrelated to the anti-cheat
protocol: it `mmap`s a shared `/tmp/testfile`, writes a sentinel int
(`116`), and special-cases being invoked with the literal argument `"java"`
to flip that sentinel to `1023` and exit immediately — worth a closer look
if `gacdclient` itself is ever documented in depth, but out of scope here.

## Build

- No `Makefile` exists anywhere in `cnet/gacd/` in this leak — the same gap
  documented for `licenseservice`, `logservice`, `gauthd`, and `uniquenamed`
  — despite `build.sh` invoking `cd gacd; make clean; make -j32` in **two**
  separate build functions ([build.sh:240-244](../build.sh#L240) and
  [build.sh:342-346](../build.sh#L342)) and installing the result to
  `/home/gacd/gacd` ([build.sh:108](../build.sh#L108)). A prebuilt 18.9MB
  binary ships regardless.
- `cnet/gacd/` also ships two large opaque data assets not referenced by any
  source file in this leak (`grep` across `.cpp`/`.hpp`/`.h`/`gacd.xml`
  turns up nothing): **`Questions.data`** (1.2MB) and **`Questions2.data`**
  (26MB), plus **`hzfont.dat`** (6.3MB, a CJK font). Their loader, if any,
  isn't present here.

## Oddities

- **`ACWhoAmI` trusts the client-declared role over the actual connection
  it arrived on** — see "The two listeners", above.
- **The delivery channel (`GAntiCheaterServer`, port 29702) ships with
  transport encryption commented out, while the control/remote-exe channel
  (`GACControlServer`, port 29712) has it enabled** — the channel that can
  push arbitrary native code to run on a *specific player* is keyed; the
  channel real players' anti-cheat traffic flows through is not, in the
  configs shipped in this leak.
- **The per-message envelope protocols (`ACQuestion`, `ACAnswer`,
  `ACTriggerQuestion`, `ACRemoteCode`, `ACQCodeRes`) are all unimplemented
  stubs** — not because the feature is missing, but because the real
  traffic rides inside the batched, compressed `ACReport` envelope instead
  (see "Anti-cheat pipeline"). Worth knowing before assuming this daemon
  follows the same "empty stub = unimplemented feature" pattern as the
  other three.
- **`Questions.data`/`Questions2.data`/`hzfont.dat`** are large shipped
  assets with no discoverable loader in this leak's source — see Build.
- **Sentinel id `1984`** recurs as both `gmroleid` for system-issued kicks
  (`punisher.cpp`) and as a magic `CodePiece` id patched by `ACRemoteExe`'s
  `"hammer"` loader — the same convention reused across two unrelated
  subsystems.
- **No `Makefile`** in `cnet/gacd/`, same pattern as every other daemon
  documented so far — see Build.
