# logservice

**Path:** [cnet/logservice/](../cnet/logservice/)
**Type:** standalone RPC-style dual UDP/TCP server (16 source files + prebuilt binary)
**Counterpart:** [cnet/logclient/](../cnet/logclient/) (linked into `gamed` only, in this leak)

## Purpose

`logservice` is a centralized log/stat sink for the game server stack. Rather than
each process writing its own log files directly, `gamed` forwards every `Log::`/
`GLog::` call over the network as an RPC message; `logservice` receives it and
fans it out to one of nine fixed local files based on message priority. It is
unrelated to [licenseservice](licenseservice.md) — no handshake, no crypto, no
per-client authentication of any kind; any UDP/TCP peer that speaks the protocol
can submit log entries.

`GLog::init()` is called once, early in startup, from
[cgame/gs/global_manager.cpp:288](../cgame/gs/global_manager.cpp#L288), which
calls `Log::setprogname("gamed")`
([cnet/logclient/log.cpp:23](../cnet/logclient/log.cpp#L23)) to bring up both
client managers. **`gamed` is the only consumer of `logclient` in this leak** —
no other daemon (`gauthd`, `gfaction`, `gacd`, `glinkd`, `gdeliveryd`,
`uniquenamed`, `gamedbd`) includes `logclientclient.hpp`, `remotelog.hpp`, or
`glog.h` anywhere in its sources.

## Key files

| File | Role |
|---|---|
| [logservice.cpp](../cnet/logservice/logservice.cpp) | `main()` — `logservice <configfile>`, sets the syslog-style threshold from config, opens the nine log files, then starts **both** `LogserviceServer` and `LogserviceTcpServer` as separate `Protocol::Server` instances sharing the same session state and dispatch backend |
| [logserviceserver.hpp](../cnet/logservice/logserviceserver.hpp)/[.cpp](../cnet/logservice/logserviceserver.cpp) | `LogserviceServer`: singleton `Protocol::Manager` bound to the **UDP** listener (11100 by default). `OnAddSession`/`OnDelSession` just log a line — no real session bookkeeping, but at least implemented (unlike `licenseservice`'s empty `//TODO` stubs) |
| [logservicetcpserver.hpp](../cnet/logservice/logservicetcpserver.hpp)/[.cpp](../cnet/logservice/logservicetcpserver.cpp) | `LogserviceTcpServer`: identical shape, bound to the **TCP** listener (11101 by default) |
| [callid.hxx](../cnet/logservice/callid.hxx) | Protocol type ids 59–62 |
| [state.hxx](../cnet/logservice/state.hxx)/[state.cxx](../cnet/logservice/state.cxx) | Single session state `state_LogNormal`, accepting all four protocols, 3600s timeout — shared by both managers (there's no "challenge" stage at all, unlike `licenseservice`'s 3-state machine) |
| [remotelog.hpp](../cnet/logservice/remotelog.hpp), [remotelogvital.hpp](../cnet/logservice/remotelogvital.hpp), [statinfo.hpp](../cnet/logservice/statinfo.hpp), [statinfovital.hpp](../cnet/logservice/statinfovital.hpp) | One `Protocol`-derived class per message. Unlike `licenseservice`, **`Process()` is actually implemented here** — each just forwards its fields straight to `LogDispatch::log(...)` or `LogDispatch::stat(...)` |
| [stubs.cxx](../cnet/logservice/stubs.cxx) | Static instantiation of all four protocol classes, registering them with the RPC framework |
| [logdispatch.h](../cnet/logservice/logdispatch.h)/[logdispatch.cpp](../cnet/logservice/logdispatch.cpp) | `LogDispatch`: static class owning 9 file descriptors, opened from the `[logservice]` config section; routes each incoming message to the right file by priority (see below) |
| [logservice.conf](../cnet/logservice/logservice.conf) | Config for both managers plus the `[logservice]` file paths and `[ThreadPool]` sizing |
| `logservice` (binary, 1.1MB) | Prebuilt ELF binary shipped in the leak — see Build, below, for why that's odd |

As with `licenseservice`, the field-level wire layout (`#include "statinfo"`,
etc.) is generated separately into [cnet/inl/](../cnet/inl/), driven by
`cnet/rpcalls.xml` (search for `"Protocols used only logservice and
logclient"`, type range 59–62).

## Wire protocol

All four protocols share an identical field layout — `priority: int`,
`msg, hostname, servicename: std::string` — maxsize 1024 bytes:

| Protocol | Type id | Sent over | Sent by (client-side) |
|---|---|---|---|
| `StatInfoVital` | 59 | TCP | `Log::vstatinfo` via `LogclientTcpClient` |
| `StatInfo` | 60 | — | **never constructed anywhere in this leak** — see Oddities |
| `RemoteLogVital` | 61 | TCP | `Log::vlogvital` via `LogclientTcpClient` |
| `RemoteLog` | 62 | UDP | `Log::vlog` via `LogclientClient` |

The split isn't about verbosity, it's about transport reliability: the "Vital"
pair rides the TCP manager (`GLog::log()` routes anything `<= LOG_NOTICE` to
`vlogvital`), while ordinary/high-volume log lines ride UDP via `vlog` — a
best-effort path that gets dropped silently if the socket buffer is full,
rather than blocking or growing the queue.

## Server-side priority routing (`LogDispatch`)

`LogDispatch::log()` ([logdispatch.h:150](../cnet/logservice/logdispatch.h#L150))
implements this cascade for every `RemoteLog`/`RemoteLogVital` message, in order:

1. `priority == LOG_CHAT` (8) → `fd_chat`, return immediately.
2. `priority == LOG_CASH` (9) → `fd_cash`, return immediately.
3. `priority <= LOG_WARNING` (EMERG..WARNING, 0–4) → also written to `fd_err`
   (unconditionally, ignoring the configured threshold).
4. `priority == LOG_NOTICE` (5) → also written to `fd_formatlog`.
5. If `priority > threshhold` (config `[logservice] threshhold`, default
   `LOG_INFO`), stop here — steps 6–7 are skipped.
6. `priority == LOG_INFO` (6) → `fd_log`.
7. `priority == LOG_DEBUG` (7) → `fd_trace`.

`LOG_CHAT`/`LOG_CASH` are checked first specifically because they're custom
priority values (8, 9) higher than `LOG_DEBUG` — without the early return
they'd fail every other branch and be silently dropped. `LOG_ACTION` (10, also
defined in [share/common/log.h](../share/common/log.h)) has **no** matching
branch anywhere in `LogDispatch` — it's a defined priority level with no file
and no route; anything logged at that level vanishes.

`LogDispatch::stat()` (for `StatInfo`/`StatInfoVital`) is simpler and maps
priority directly to one of three files: `LOG_DEBUG → fd_statinfom`,
`LOG_INFO → fd_statinfoh`, `LOG_NOTICE → fd_statinfod`. The `m`/`h`/`d` suffixes
aren't arbitrary — they line up with the client-side stat aggregation
intervals below.

## Client side: `logclient` and `GLog`

[cnet/logclient/log.cpp](../cnet/logclient/log.cpp) implements the low-level
`Log::vlog`/`vlogvital`/`vstatinfo`, each of which builds the matching protocol
object and calls `SendProtocol()` on the relevant manager; on send failure
(not yet connected, or send()-level error) it falls back to local `syslog` via
`Log::vsyslog()` rather than losing the message outright.
[cnet/logclient/glog.cpp](../cnet/logclient/glog.cpp) wraps that into the
game-facing `GLog::` API (`log`, `logvital`, `trace`, `tasklog`, `formatlog`,
`task`, `upgrade`, `die`, `keyobject`, `cash`) used throughout `cgame/gs`.

Both `LogclientClient` (UDP) and `LogclientTcpClient` (TCP) —
[logclientclient.cpp](../cnet/logclient/logclientclient.cpp),
[logclienttcpclient.cpp](../cnet/logclient/logclienttcpclient.cpp) — reconnect
on `OnDelSession`/`OnAbortSession` with exponential backoff (2s doubling to a
256s cap). Their client-side `Process()` handlers are `// TODO` stubs (these
managers only ever send; the server never talks back).

**Stat aggregation:** the `Log::HouseKeeper` housed in
[share/common/log.h](../share/common/log.h) is a `Timer::Observer` that on a
~5-minute cadence calls `Statistic::enumerate()` for the `min5` interval, and
near the top of each hour for `hour` and `day`. Each call lands in
`logstatistic()`, which maps interval → priority (`min5 → LOG_DEBUG`,
`hour → LOG_INFO`, `day → LOG_NOTICE`) and calls `Log::statinfo()` →
`vstatinfo()` → `StatInfoVital`. That's the origin of the `statinfom`/
`statinfoh`/`statinfod` filenames on the server side: **m**in5, **h**our,
**d**ay rollups of whatever counters were registered with `Statistic`.

## Config

[logservice.conf](../cnet/logservice/logservice.conf) sets the server to
listen on UDP `0.0.0.0:11100` (`LogserviceServer`) and TCP `0.0.0.0:11101`
(`LogserviceTcpServer`), and points the nine log files at `/export/logs/world2.*`.
[logclient.conf](../cnet/logclient/logclient.conf), by contrast, targets UDP/TCP
`172.16.2.2:11102`/`11103` — **the shipped sample configs don't line up**: the
client's target ports (11102/11103) don't match the server's listen ports
(11100/11101). Since these are almost certainly per-deployment values rather
than a matched pair, this is more likely leftover/sample config than a live
bug, but it means the two files as shipped would not talk to each other.

## Build

- Unlike `licenseservice` (never referenced in `build.sh` at all), `logservice`
  **is** built by `builddeliver()` — `cd logservice; make clean; make -j32`
  ([build.sh:232-236](../build.sh#L232)) — and the resulting binary is copied to
  `/home/logservice/logservice` in the install step
  ([build.sh:109](../build.sh#L109)). **But no `Makefile` exists anywhere in
  `cnet/logservice/`** in this leak, so that build step could not actually run
  as shipped. A prebuilt `logservice` binary is present in the directory
  regardless (1.1MB), meaning whatever Makefile produced it wasn't included in
  the leak.
- `logclient`, by contrast, ships four working Makefile variants
  ([Makefile.gs](../cnet/logclient/Makefile.gs),
  [Makefile.gamedbd](../cnet/logclient/Makefile.gamedbd),
  [Makefile.single.gcc](../cnet/logclient/Makefile.single.gcc),
  [Makefile.single.icpc](../cnet/logclient/Makefile.single.icpc)) and is built
  as `liblogCli.a` in `buildgslib()`
  ([build.sh:120-125](../build.sh#L120)), then symlinked into `gamed`'s `iolib`
  ([build.sh:58](../build.sh#L58)) — this is the only place `liblogCli.a` gets
  linked in the whole tree.

## Oddities

- **No authentication whatsoever.** Any host that can reach UDP 11100 or TCP
  11101 can submit arbitrary `RemoteLog`/`StatInfo` messages that get written
  straight into the shared log files — no session validation, no source
  filtering (contrast with `licenseservice`'s HMAC-based handshake, itself
  unimplemented server-side but at least designed-in).
- **`StatInfo` (type 60) is defined, registered, and accepted by the session
  state machine, but never constructed or sent anywhere in this leak.** Only
  `StatInfoVital` is ever used (`Log::vstatinfo` always builds a
  `StatInfoVital`). It's dead protocol surface on both ends.
- **`LOG_ACTION` (10)** is defined in `share/common/log.h` alongside
  `LOG_CHAT`/`LOG_CASH` but has no corresponding file or branch in
  `LogDispatch` — any message logged at that priority is silently discarded
  server-side.
- **Missing `Makefile`** in `cnet/logservice/` despite `build.sh` invoking
  `make` there directly (see Build).
- **Sample config mismatch** between `logservice.conf`'s listen ports
  (11100/11101) and `logclient.conf`'s target ports (11102/11103) — see
  Config.
- `gamed` is the sole integration point for this service in the current leak;
  every other daemon logs locally (syslog / stdout) with no `logservice`
  involvement at all.
