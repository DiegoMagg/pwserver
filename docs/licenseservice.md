# licenseservice

**Path:** [cnet/licenseservice/](../cnet/licenseservice/)
**Type:** standalone RPC-style TCP server (13 files)
**Counterpart:** [cnet/licenseclient/](../cnet/licenseclient/) (embedded in `gamed` and friends — see below)

## Purpose

`licenseservice` is the anti-piracy / seat-licensing daemon for this Perfect World
server stack. It is unrelated to [gdbclient](gdbclient.md)/`gamedbd` — this is
licensing the *server binaries themselves*, not player data.

At least **three** binaries independently perform the full handshake and refuse
to fully start without it, all reading `/home/license.conf` and all calling
`kill(0, SIGUSR1)` on failure:
- `gamed`, in [cgame/gs/start.cpp:160-176](../cgame/gs/start.cpp#L160)
- `gauthd`, in [cnet/gauthd/gauthd.cpp:21-37](../cnet/gauthd/gauthd.cpp#L21)
- `gfaction`, in [cnet/gfaction/gfaction.cpp:20-36](../cnet/gfaction/gfaction.cpp#L20)
  — see [gfactiond.md](gfactiond.md)

`gfaction` additionally gates its DB connection behind a *second*, independent
check: [cnet/gfaction/gfactiondbclient.cpp](../cnet/gfaction/gfactiondbclient.cpp)'s
`OnAddSession`/`Reconnect` kill the process group directly (same `kill(0,
SIGUSR1)`) the moment that connection resolves if `LIC_LOAD_FACTION` isn't
granted, rather than merely gating a feature the way the macro is used
elsewhere.

`cgame/gs`'s own [netmsg.cpp](../cgame/gs/netmsg.cpp) also `#include
<liblicense.h>` and gates individual features behind `LIC_*` checks, but
doesn't call `Init()` itself — it doesn't need to, since it's compiled into
the same `gamed` binary whose `start.cpp` already performs the handshake
before any of `netmsg.cpp`'s checks would run.

## Key files

| File | Role |
|---|---|
| [licenseservice.cpp](../cnet/licenseservice/licenseservice.cpp) | `main()` — `licenseservice <configfile>`, starts `GLicenseServer` as a `Protocol::Server` |
| [glicenseserver.hpp](../cnet/licenseservice/glicenseserver.hpp) / [.cpp](../cnet/licenseservice/glicenseserver.cpp) | `GLicenseServer`: singleton `Protocol::Manager`, initial session state `LicChallenge`. `OnAddSession`/`OnDelSession` are `// TODO` — no session bookkeeping is implemented |
| [callid.hxx](../cnet/licenseservice/callid.hxx) | Protocol type ids 13000–13012 (see table below) |
| [state.hxx](../cnet/licenseservice/state.hxx) / [state.cxx](../cnet/licenseservice/state.cxx) | The 3-stage session state machine (`LicChallenge` → `LicValidate` → `LicGame`), each state timing out after 3600s |
| [licensechallenge.hpp](../cnet/licenseservice/licensechallenge.hpp), [licenselogin.hpp](../cnet/licenseservice/licenselogin.hpp), [licenselogin_re.hpp](../cnet/licenseservice/licenselogin_re.hpp), [licensedata.hpp](../cnet/licenseservice/licensedata.hpp), [licensedata_re.hpp](../cnet/licenseservice/licensedata_re.hpp), [licensequit.hpp](../cnet/licenseservice/licensequit.hpp) | One `Protocol`-derived class per message. **Every `Process()` method here is an empty `// TODO` stub** — see Oddities |
| [stubs.cxx](../cnet/licenseservice/stubs.cxx) | Static instantiation of all six protocol classes, registering them with the RPC framework |

The field-level wire layout for each message (`#include "licensechallenge"`, etc.
inside the `.hpp` files) is generated separately and lives in
[cnet/inl/](../cnet/inl/) (`licensechallenge`, `licenselogin`, `licensedata`, …),
driven by the `<protocol>`/`<rpcdata>` definitions in
[cnet/rpcalls.xml](../cnet/rpcalls.xml) (search for `"Protocols used only
licenseserver and licenseclient"`, type range 13000–13100).

## Wire protocol

| Protocol | Type id | Max size | Direction | Fields |
|---|---|---|---|---|
| `LicenseChallenge` | 13000 | 32 | server → client (sent immediately on connect) | `challenge: Octets` |
| `LicenseLogin` | 13001 | 256 | client → server | `login, service: Octets`, `time_start: uint`, `rpc_passwd: Octets` (HMAC-MD5), `sev_rand: Octets` |
| `LicenseLogin_Re` | 13002 | 256 | server → client | `id, version: int`, `ip_last: uint`, `time_end: int`, `clt_rand: Octets` |
| `LicenseData` | 13003 | 16384 | both directions | `id: int`, `datakey, data: Octets` (RC4-encrypted payload) |
| `LicenseData_Re` | 13004 | 16384 | both directions | same shape as `LicenseData` |
| `LicenseQuit` | 13012 | 16 | both directions | `id: int`, `success: uint` |

Session states accept exactly the protocols relevant to that stage:
`LicChallenge = {Challenge, Login, Quit}` → `LicValidate = {Login_Re, Data, Quit}`
→ `LicGame = {Data, Data_Re, Quit}`.

## Handshake flow (as implemented client-side in `liblicense.cpp`)

Read from [cnet/licenseclient/liblicense.cpp](../cnet/licenseclient/liblicense.cpp)
(`LicenseInterfaces::Init`, ~line 485), since the server-side `Process()` handlers
are stubs in this leak:

1. Client opens a raw TCP socket to the configured license server and waits — the
   **server sends `LicenseChallenge` first**, containing a random `challenge` blob.
2. Client builds `rpc_passwd = HMAC-MD5(challenge, time_key ‖ login ‖ passwd)`
   where `time_key` is the connection time rounded down to a 7-day (604800s)
   boundary, generates 4 random ints into `sev_rand`, then sends `LicenseLogin`.
3. Client derives a session `iseckey` (`GenerateKey(login, rpc_passwd, sev_rand)`)
   for decrypting further server→client traffic (RC4), then waits for
   `LicenseLogin_Re`. The reply is checked against `SERVER_VERSION + API_VERSION`
   and yields `id`, `version`, `ip_last`, `time_end`, `clt_rand`.
4. Client derives the outgoing `oseckey` from `clt_rand`, RC4-encrypts a local
   `data` blob (`GetClientInfo`) under a `datakey` built from `{id, version,
   ip_last, time_end}`, and sends it as `LicenseData`.
5. Server is expected to answer with `LicenseData_Re` carrying a
   `sizeof(LicenseDataBase)` payload; the client validates `datakey` round-trips
   correctly, decrypts it, and populates the global `LIC` = `LicenseDataBase*`
   used by every `LIC_*` feature macro afterwards.
6. Client computes `success = ip_last * time_key * version` and exchanges
   `LicenseQuit` with the server to close out the handshake; a mismatch on
   `success` fails the whole `Init()` call.
7. If any step fails, the caller (`gamed`'s or `gauthd`'s `main()`) prints
   `LICENSE::START: ERR=<code>` and kills its own process group
   (`kill(0, SIGUSR1)`) — neither process runs without a completed handshake.

## Counterpart: `licenseclient` and the `LIC_*` feature gates

[cnet/licenseclient/liblicense.h](../cnet/licenseclient/liblicense.h) exposes
`LicenseInterfaces::{Init, Check, Value, Complete}` plus a large block of
obfuscated macros — `LIC_MAX_ONLINE`, `LIC_MAX_CONNECT`, `LIC_LOAD_ROLE`,
`LIC_SAVE_ROLE`, `LIC_GET_FACTION`, `LIC_INIT_MYSQL`, `LIC_GSHOP_ADD_GOLD`, …
(~30 total) — each expanding to a `Check()`/`Value()` call against the
`LicenseDataBase` populated during the handshake. These are the actual
enforcement points: `LIC_INVALID_LICENSE` gates whether `Init()` even reports
success, and `LIC_INIT_SERVICE` gates `LuaManager::Init()` in
[cgame/gs/start.cpp:206](../cgame/gs/start.cpp#L206) — the pattern repeats
wherever a feature needs to be license-limited.

The whole `Init()`/`Check()`/`Value()` path is wrapped in
`VM_BEGIN`/`VM_END` macros that invoke a third-party **VMProtect** SDK
(`cnet/licenseclient/vm/VirtualizerSDK*.h`) to virtualize/obfuscate the code at
build time — an anti-tamper layer on top of the protocol itself.

`gamed` and `gauthd` each read the license server's address/port/login/passwd
from `/home/license.conf`'s `[GLicenseClient]` section
([cgame/gs/start.cpp:162-168](../cgame/gs/start.cpp#L162),
[cnet/gauthd/gauthd.cpp:25-29](../cnet/gauthd/gauthd.cpp#L25)); a hardcoded
sample connection (`189.127.164.9:33000`, login/pass `teste`/`teste`) exists in
[licenseclient.cpp](../cnet/licenseclient/licenseclient.cpp)'s standalone test
`main()`. `gauthd` additionally gates its MySQL init behind `LIC_INIT_MYSQL`
([cnet/gauthd/gmysqlclient.cpp:66](../cnet/gauthd/gmysqlclient.cpp#L66)).

Crypto/encoding primitives used: RC4 ([rc4.h](../cnet/licenseclient/rc4.h)),
HMAC-MD5 ([md5.c](../cnet/licenseclient/md5.c)), base64
([base64.cpp](../cnet/licenseclient/base64.cpp)), and MPPC-style compression
([mppc.h](../cnet/licenseclient/mppc.h)).

## Build

- Neither `licenseservice` nor `licenseclient` is referenced anywhere in the
  top-level [build.sh](../build.sh) — unlike `gdbclient`/`gamed`/`logclient`,
  there is no build step for either directory. No `Makefile` exists in
  `cnet/licenseservice/` either. If this stack is meant to build/run, both are
  missing from the leak's build pipeline.
- `start.cpp` unconditionally `#include <liblicense.h>` and links against it, so
  `gamed` cannot currently be built at all without `liblicense` (and its
  VMProtect SDK headers) resolvable on the include/link path.

## Oddities

- **All six `Process()` handlers in `licenseservice` are empty `// TODO` stubs.**
  The daemon defines the wire protocol and session state machine but does not
  actually validate logins, generate real challenges, or issue license data in
  this leak — it's a shell that would accept connections and immediately time
  out (3600s) without responding, since nothing populates the reply protocols.
  The real handshake logic only exists client-side, in `liblicense.cpp`.
- The `sev_rand` field is documented/named as if server-originated but is
  populated with client-generated random values in `liblicense.cpp` — likely a
  legacy naming carryover, not a bug worth "fixing" in isolation.
- `printf("Emulate by Newester Entertainment \n")` in `start.cpp` right after
  the license check succeeds — an operator/brand string baked into this
  particular leaked build.
