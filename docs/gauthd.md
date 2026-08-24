# gauthd

**Path:** [cnet/gauthd/](../cnet/gauthd/)
**Type:** standalone RPC-style TCP daemon, three protocol families over two listeners (77 files + prebuilt 19MB binary)
**Counterpart:** none present in this leak — see "Who actually talks to it", below

## Purpose

`gauthd` is the account/session authority for the server stack: it owns login
(password verification + anti-bruteforce), tracks which zone/session each
`userid` is currently attached to, records online playtime for billing
("accounting"), backs a cash-shop top-up flow, hosts a full arena/PvP
ranking CRUD+top-list subsystem over MySQL, and exposes a second,
separately-authenticated "panel" listener that lets an authenticated client
run raw queries against the game database. It also performs the
[licenseservice](licenseservice.md) handshake before doing anything else —
`gauthd` is one of the two binaries (along with `gamed`) that calls
`LicenseInterfaces::Init()` and kills its own process group on failure
([gauthd.cpp:16-35](../cnet/gauthd/gauthd.cpp#L16)).

Despite the size of the protocol surface declared in `callid.hxx` (~50 RPC
IDs / protocol types), **only a minority of message handlers are actually
implemented** — the rest are `// TODO` stubs, the same pattern seen in
`licenseservice` and (partially) `logservice`. See "What's actually wired up",
below, for the split.

## Key files

| File | Role |
|---|---|
| [gauthd.cpp](../cnet/gauthd/gauthd.cpp) | `main()` — license handshake, then (if `LIC_LUA_INIT`) brings up `LuaManager`/`AuthManager`, starts both `GAuthServer` and `GPanelServer` as `Protocol::Server`s, connects `MysqlManager` (exits with `MYSQL: ERROR CONNECT!!!` if it can't), then (if `LIC_INIT_SERVICE`) starts the timer tasks and the thread pool |
| [gauthserver.hpp](../cnet/gauthd/gauthserver.hpp)/[.cpp](../cnet/gauthd/gauthserver.cpp) | `GAuthServer`: the main listener (TCP 9200). Owns three in-memory maps: `usermap` (userid → session/zone), `accntmap` (userid → accounting start-time), `zonemap` (session → zoneid). `OnAddSession`/`OnDelSession` are little more than `printf` + `//TODO` |
| [gpanelserver.hpp](../cnet/gauthd/gpanelserver.hpp)/[.cpp](../cnet/gauthd/gpanelserver.cpp) | `GPanelServer`: a second, independent listener implementing its own challenge/response handshake (see "GM panel", below) |
| [authmanager.h](../cnet/gauthd/authmanager.h)/[.cpp](../cnet/gauthd/authmanager.cpp) | `AuthManager`: password-hash normalization (`Auth0xMD5`/`AuthBase64`/raw, selected by DB `hash` config), login-string charset validation, and the anti-bruteforce IP counter |
| [gmysqlclient.hpp](../cnet/gauthd/gmysqlclient.hpp)/[.cpp](../cnet/gauthd/gmysqlclient.cpp) (1419 lines — by far the largest file) | `MysqlManager`: the only DB access layer. Account lookup/creation-time/GM-privilege queries, online-record bookkeeping, cash-log/cash-SN handling, the full arena player/team CRUD + top-list generation, and the raw `PanelQuery` used by the GM panel |
| [luaman.hpp](../cnet/gauthd/luaman.hpp)/[.cpp](../cnet/gauthd/luaman.cpp) | `LuaManager`: an embedded, hot-reloading LuaBridge scripting engine — see "Embedded Lua", below |
| [callid.hxx](../cnet/gauthd/callid.hxx) | ~30 `CallID` (RPC) + ~35 `ProtocolType` (one-way) ids — the full declared surface |
| [state.hxx](../cnet/gauthd/state.hxx)/[state.cxx](../cnet/gauthd/state.cxx) | Three session states: `state_GAuthServer` (all ~48 main-listener protocols, 86400s/24h timeout), `state_GPanelLogin` (just `PanelResponse`, 3600s), `state_GPanelServer` (post-auth panel protocols, 3600s) |
| [stubs.cxx](../cnet/gauthd/stubs.cxx) | Static instantiation/registration of every protocol class in the tree |
| `*.hpp` (one-way protocols), `*.hrp` (`Rpc`/`ProxyRpc` request-response pairs) | One class per message — see the protocol tables below |
| [gauthd.conf](../cnet/gauthd/gauthd.conf) | Config — see "Config", below, for what's conspicuously **missing** |
| [pw_arena.sql](../cnet/gauthd/pw_arena.sql) | Schema for `arena_players`/`arena_teams` — the tables `MysqlManager`'s EC-arena methods read/write |
| [script.lua](../cnet/gauthd/script.lua) | **Not a Lua script** — the file's entire contents is the literal text `/home/gauthd/script.lua`, i.e. a placeholder. The real script referenced by `LuaManager` isn't in this leak |

## Two independent listeners

`gauthd` runs two separate `Protocol::Manager` singletons, each its own TCP
port and its own session-state graph — there's no shared session concept
between them:

| Manager | Port (conf) | Initial state | Purpose |
|---|---|---|---|
| `GAuthServer` | 9200 | `state_GAuthServer` (86400s timeout) | Login, session/zone tracking, accounting, cash top-up, arena RPCs — the "real" game-facing API |
| `GPanelServer` | *(no `[GPanelServer]` conf section shipped — see Config)* | `state_GPanelLogin` (3600s) → `state_GPanelServer` (3600s) after auth | A separate admin/GM-tool channel that, once authenticated, can run arbitrary queries against the game DB |

Both are constructed identically in `gauthd.cpp` (`SetAccumulate`, read a
`shared_key`, `Protocol::Server(manager)`), but `GAuthServer` never sends
anything on connect, while `GPanelServer` immediately pushes a
`PanelChallenge`.

## Who actually talks to it

No file outside `cnet/gauthd/` in this tree includes any of `gauthd`'s `.hrp`/
protocol-defining headers (`matrixpasswd.hrp`, `userlogin.hrp`,
`gquerypasswd.hrp`, `announcezoneid.hpp`, `cashserial.hrp`, ...), and no
`GAuthClient` class exists anywhere in the leak — it's only referenced in
**commented-out dead code** inside `matrixpasswd2.hrp`, `matrixtoken.hrp`, and
`userlogin2.hrp` (`// if( GAuthClient::GetInstance()->SendProtocol(...) )`).
`cgame/gs/userlogin.cpp`'s login path calls its own internal
`world_manager::UserLogin(...)`, not any of these RPCs. `build.sh` also
references `cnet/gdeliveryd` (build + install steps) as a daemon that would
plausibly be `gauthd`'s RPC client, but **that directory does not exist in
this leak at all**. In short: `gauthd`'s entire wire protocol is fully
defined and partly implemented server-side, but the client that's meant to
drive it is absent from this codebase.

The `isec`/`iseckey`/`osec`/`oseckey` values in `gauthd.conf`'s
`[GAuthServer]` section are transport-level encryption parameters consumed by
the underlying `Protocol::Manager`/session framework itself (not
application code in this directory) — since `GAuthServer` never issues a
challenge on connect, whatever client exists must already share these
statically-configured keys out of band.

## What's actually wired up

Checked every `Process()`/`Server()`/`Delivery()` body in the directory.
Real logic (not just a `// TODO` stub or an early `return false`):

- **Login core:** `MatrixPasswd` (`ProxyRpc`, id 550) — the real password
  check, gated behind antibrut + `LIC_GET_ROLE_LIST` + a Lua HWID hook (see
  below); `GQueryPasswd` (id 502) — see the correctness oddity below;
  `UserLogin` (id 15) / `UserLogout` (id 33) — register/clear the
  `usermap`/zone entry and touch `OnlineRecord`/`OfflineRecord`.
- **Session bookkeeping:** `AnnounceZoneid`/`2`/`3` (505/523/527) — three
  byte-for-byte identical handlers (only the type id and a log string
  differ) that register `zonemap[sid] = zoneid`; `StatusAnnounce` (6) —
  drops a user from `usermap` on disconnect notice; `AccountingRequest`/
  `Response` (503/504) — MD5-authenticated (against `shared_key`) start/stop/
  elapsed playtime tracking into `accntmap`, and kicks the session if the
  user isn't otherwise known.
- **Privilege/GM lookup:** `QueryUserPrivilege` (506) — proxies straight to
  `MysqlManager::QueryGMPrivilege`.
- **Cash top-up:** `GetAddCashSN` (`ProxyRpc`, id 514) — proxies the request
  onward, then on the reply calls `MysqlManager::UpdateUseCashSN` and sends
  an `AddCash` notification back to the proxied peer; `AddCash_Re` (516) —
  logs a successful top-up via `MysqlManager::AddCashLog`, or calls
  `SendFailCash()` (a `printf`, no rollback) on failure. (`AddCash` itself,
  id 515, is an outbound-only notification from `gauthd`'s point of view —
  its own `Process()` being a stub is expected, not a gap.)
- **Arena/PvP ranking (`RPC_EC_*`, ids 5631–5657):** a complete CRUD +
  top-list subsystem — create/get/set/delete for both arena players and
  arena teams, plus top-list generation — fully implemented in
  `MysqlManager` against the `arena_players`/`arena_teams` tables
  (`pw_arena.sql`). This is the single largest coherent implemented feature
  in the daemon.
- **GM panel:** `PanelResponse` (auth) and `MySQLStorage`/`GMySQLStorage`
  (query execution) — see "GM panel", below.

Everything else declared in `callid.hxx` — every GM command
(`GmKickoutUser`, `GmShutup`, `GmForbidSellpoint`), `KickoutUser`,
`QueryUserForbid`(`_Re`), `KeyExchange`, `VerifyMaster`(`_Re`), the entire
billing family (`BillingRequest`/`BillingBalance`/`BillingBalanceSa`/
`BillingConfirm`/`BillingCancel`), `Game2Au`/`Au2Game`, `AuthdVersion`,
`DiscountAnnounce`, `TransBuyPoint`, `MatrixFailure`, `GetPlayerIdByName_Re`,
`SysSendMail_Re`/`SysSendMail3_Re`, `ACForbidCheater`, `SSOGetTicketReq`,
`CashSerial`, `MatrixPasswd2`, `MatrixToken`, `UserLogin2`, `CouponExchange`,
`GetUserCoupon` — is an empty `// TODO` stub, or (for `MatrixPasswd2`/
`MatrixToken`/`UserLogin2`) a `Delivery()` that `return false`s immediately
above dead code referencing the nonexistent `GAuthClient`.

## Login flow (`MatrixPasswd`)

[matrixpasswd.hrp](../cnet/gauthd/matrixpasswd.hrp) is the only fully-wired
password check:

1. `AuthManager::AddAntibrut(loginip)` — if this IP has failed 8+ times, shell
   out via `system("ipset add Antibrut <ip> 2>&1 &")` and reject
   (`ERR_ACCOUNTLOCKED`). The IP string comes from `inet_ntoa()`, not
   attacker-controlled text, so this isn't an injection vector, but it is a
   raw `system()` call in a hot RPC path.
2. `AuthManager::ValidLogin(account)` — charset allow-list (`[0-9A-Za-z_=]`).
3. `MysqlManager::MatrixPasswd(userid, account, dbpass)` — DB lookup.
4. **Lua HWID gate:** if an 8-byte `hwid` was supplied, calls
   `LuaManager::EventOnUserLogin(userid, login, ip, hwid)` — a Lua-scripted
   hook (see "Embedded Lua") that can reject the login outright by returning
   a nonzero error code. A login with no/short `hwid` is rejected
   unconditionally, regardless of what the script would have said.
5. Gated behind `VM_BEGIN/if (LIC_GET_ROLE_LIST)` — another
   [licenseservice](licenseservice.md)-style feature gate, same macro family
   as `LIC_INIT_SERVICE`/`LIC_LUA_INIT`.
6. On success, `AuthManager::AuthPasswd()` re-encodes the DB password per the
   configured hash mode (`1`=binary passthrough, `2`=`0xMD5`-hex-decode,
   `3`=base64) and returns it as the response — there's no
   server-generated challenge/nonce anywhere in this path, so the "response"
   is really just the stored password in the wire encoding the client
   expects.

`GQueryPasswd` (id 502) is a second, independent password endpoint used
(per its comment) "from delivery": it derives `res->userid` from the account
string itself (`atoi(account)`, rejected unless divisible by 16 — an
odd, undocumented account-numbering constraint) and returns
`MD5(account ‖ account)` — the commented-out `HMAC_MD5Hash` block right above
it suggests a real challenge-response digest was replaced with this simpler
form, which never touches the actual stored password. Whether that's
intentional (a different auth path with weaker guarantees, since it's
account-scoped and not exposed to arbitrary clients) or an unfinished
substitution is not resolvable from this leak alone.

## GM panel (`GPanelServer`)

A second authentication scheme, independent of `MatrixPasswd`, in front of
raw SQL access:

1. On connect, `GPanelServer::OnAddSession` generates 4 random ints as
   `rand_key` and sends them as a `PanelChallenge`.
2. The client must reply with `PanelResponse` carrying a 16-byte `nonce`
   equal to `HMAC-MD5(MD5(rand_key), client_key)` — `client_key` being a
   second shared secret from config (see "Config" — **also missing from the
   shipped conf**).
3. On match, the session is switched to `state_GPanelServer` and can now send
   `MySQLStorage`/`GMySQLStorage` requests.
4. `MySQLStorage::Process` builds a `GSQL` from the client-supplied
   `input_str` and calls `MysqlManager::PanelQuery()`, which forwards
   straight to `MysqlSender()` — the same low-level query executor used by
   every other DB method in the class, with **no query allow-listing at this
   layer**. Whatever access control exists is entirely in the challenge/
   response step above.

## Embedded Lua

`LuaManager` ([luaman.cpp](../cnet/gauthd/luaman.cpp), header comment: *"PW
LUA SCRIPT GDELIVERYD (C) DeadRaky 2022"* — note the file says GDELIVERYD,
a daemon that doesn't exist in this leak, suggesting the code was copied in
from elsewhere without updating the comment) embeds LuaBridge and:

- Loads `script.lua` at startup and **hot-reloads it every 30 heartbeat
  ticks** by comparing `mtime` — no daemon restart needed to change logic.
- Exposes exactly two native functions to scripts: `game__Patch(address,
  type, value)` and `game__Get(address, type, offset)` — **raw process-memory
  read/write by absolute address**, typed as char/short/int/int64/float/
  double. This is a live-patching hook into the running process, callable
  from a hot-reloadable script file.
- Dispatches four named Lua events if defined: `Init`, `Update`, `HeartBeat`,
  and `EventOnUserLogin` — the last is the login gate described above.
- As shipped, `script.lua` contains no Lua at all (see Key files), so every
  event dispatch in this leak prints `LUA::Event: NULL!!!` and does nothing
  — the entire mechanism is present and wired up, but inert without the
  actual script.

## Config

[gauthd.conf](../cnet/gauthd/gauthd.conf) has exactly three sections:
`[GAuthServer]`, `[storage]`, `[ThreadPool]`. **Two sections the code reads
at startup are absent:**

- `[GPanelServer]` — `gauthd.cpp` reads `accumulate`, `shared_key`, and
  `client_key` from it unconditionally. With the section missing, `Conf::find`
  returns empty strings, so `GPanelServer::client_key` ends up empty —
  meaning the GM-panel HMAC challenge in step 2 above would be computed
  against an empty secret as shipped.
- `[GMysqlClient]` — `gauthd.cpp` reads `address`/`port`/`user`/`passwd`/
  `name`/`hash` from it to initialize `MysqlManager`, then calls `Connect()`
  and `exit(-1)`s with `MYSQL: ERROR CONNECT!!!` if that fails. With no
  section, this resolves to an empty host and port 0 — `gauthd` as shipped
  cannot start successfully against this config file at all.

## Build

- Like `licenseservice` and `logservice`, **no `Makefile` exists anywhere in
  `cnet/gauthd/`** in this leak, despite `build.sh`'s `builddeliver()`
  running `cd gauthd; make clean; make -j32`
  ([build.sh:224-228](../build.sh#L224)) and the install step copying the
  result to `/home/gauthd/gauthd`
  ([build.sh:103](../build.sh#L103)). A prebuilt 19MB `gauthd` binary is
  present in the directory regardless.
- `gauthd.cpp` unconditionally `#include <liblicense.h>` and links against
  it, same as `gamed`'s `start.cpp` — see
  [licenseservice.md](licenseservice.md) for what that pulls in (VMProtect
  SDK headers included).

## Oddities

- **No `[GPanelServer]`/`[GMysqlClient]` config sections shipped** — see
  Config. The second is fatal to startup as-is; the first silently weakens
  the panel's auth to an empty shared secret.
- **No RPC client for `gauthd`'s core protocol exists anywhere in this
  leak** — see "Who actually talks to it". `GAuthClient` is a name that only
  appears in dead, commented-out code.
- **`GQueryPasswd`'s digest is `MD5(account ‖ account)`**, never touching the
  real stored password, right below a commented-out proper HMAC — see
  "Login flow".
- **The raw-memory-patch Lua hooks** (`game__Patch`/`game__Get`) are wired
  into a file-watched hot-reload loop, but the shipped `script.lua` is a
  placeholder path string, not a script — the whole subsystem is inert in
  this leak (see "Embedded Lua").
- **`AnnounceZoneid`/`2`/`3`** are copy-pasted triplicates differing only in
  protocol id and a log string — no functional difference between them in
  this leak.
- **`luaman.cpp`'s header attributes the code to "GDELIVERYD (C) DeadRaky
  2022"** — both a wrong-daemon-name label (this is `gauthd`, not
  `gdeliveryd`, which doesn't even exist in the leak) and a concrete,
  dated attribution suggesting this Lua layer is a later private-server
  addition, not original Perfect World code.
- **`AntibrutClear`/`CheckAddCashcn`/`CheckTimer`** (a periodic cash-SN
  sweep + antibrut-list clear) exist only as a commented-out block at the
  bottom of `gauthserver.cpp` — declared, never compiled in, and not
  referenced from `gauthd.cpp`'s actual timer task list
  (`LuaTimer`/`AuthTimer`/`MysqlTimer` only). `AuthManager::HeartBeat`
  independently clears the antibrut list every 16 ticks, so that half of
  the dead `CheckTimer` is at least covered elsewhere; the cash-SN sweep is
  not.
