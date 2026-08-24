# gpanelclient

**Path:** [cnet/gpanelclient/](../cnet/gpanelclient/)
**Type:** minimal standalone TCP client, 14 files, no prebuilt binary
**Counterpart:** [gauthd](gauthd.md)'s `GPanelServer` listener (port from
`[GPanelServer]`, not present in the shipped `gauthd.conf` — see
"Config", below) — this is the client half of the GM-panel raw-SQL channel
documented in [gauthd.md](gauthd.md#gm-panel-gpanelserver)

## Purpose

`gpanelclient` (binary name `gpanel`, from
[gpanel.cpp](../cnet/gpanelclient/gpanel.cpp)) is not an interactive admin
tool the way [gacdclient](gacd.md#counterpart-gacdclient) is — it's a small,
self-contained **proof-of-concept / smoke-test client** for `gauthd`'s
GM-panel channel: connect, complete the HMAC challenge/response handshake,
and — automatically, with no user input at all — send exactly one
**hardcoded** raw SQL query (`SELECT COUNT(*) FROM users`), print whatever
rows come back, and sit idle. There's no command loop, no way to issue a
different query without editing and recompiling the source. This reads as a
"does the panel channel work end-to-end" test harness that was left in the
tree, not a finished operator tool.

## Key files

| File | Role |
|---|---|
| [gpanel.cpp](../cnet/gpanelclient/gpanel.cpp) | `main()` — `gpanel <configfile>`, reads `client_key` from config, starts `GPanelClient` as a `Protocol::Client` |
| [gpanelclient.hpp](../cnet/gpanelclient/gpanelclient.hpp)/[.cpp](../cnet/gpanelclient/gpanelclient.cpp) | `GPanelClient`: single-connection `Protocol::Manager`, holds the configured `client_key`. **No reconnect-with-backoff logic** — unlike every other `*Client` manager in this codebase (`LogclientClient`, `UniqueNameClient`, `GFactionDBClient`, …), `OnDelSession`/`OnAbortSession` just flip `conn_state` and `printf` — there's no `Reconnect()`/`HouseKeeper::AddTimerTask` call anywhere in this file, so a dropped connection is never retried |
| [panelchallenge.hpp](../cnet/gpanelclient/panelchallenge.hpp) | Receives the server's random challenge and replies — the actual crypto is here (see "Handshake", below) |
| [panelresponse.hpp](../cnet/gpanelclient/panelresponse.hpp) | The message this client *sends*; its own `Process()` is an unused stub (expected — outbound-only, same pattern as every other one-way protocol in this codebase) |
| [panelresponse_re.hpp](../cnet/gpanelclient/panelresponse_re.hpp) | On a successful auth result, fires the one hardcoded query — see "The query" |
| [mysqlstorage.hpp](../cnet/gpanelclient/mysqlstorage.hpp)/[mysqlstorage_re.hpp](../cnet/gpanelclient/mysqlstorage_re.hpp) | The raw-SQL request/response pair (`MySQLStorage`/`MySQLStorage_Re`) — `_Re::Process()` just dumps every returned row via `printf` |
| [gmysqlstorage.hrp](../cnet/gpanelclient/gmysqlstorage.hrp) | A second, unrelated key/value RPC (`RPC_GMYSQLSTORAGE`) — registered in `stubs.cxx` but never invoked anywhere in this client; its `Server()` half (`DBBuffer::buf_find("base", ...)`, behind `#ifdef USE_DB`) belongs to whatever process would answer it, not this one |
| [callid.hxx](../cnet/gpanelclient/callid.hxx)/[state.hxx](../cnet/gpanelclient/state.hxx)/[state.cxx](../cnet/gpanelclient/state.cxx) | One session state, `state_GPanelClient`, accepting `PanelChallenge`/`PanelResponse_Re`/`MySQLStorage_Re`/`GMySQLStorage`, 3600s timeout |
| [gamesys.conf](../cnet/gpanelclient/gamesys.conf) | Points at `127.0.0.1:29900` with a real `client_key` — see Config |

## Handshake

This completes the client side of the flow already reverse-engineered from
`gauthd`'s `GPanelServer` in [gauthd.md](gauthd.md#gm-panel-gpanelserver):

1. Server sends `PanelChallenge(nonce)` on connect (`GPanelServer::OnAddSession`
   in `gauthd`).
2. `PanelChallenge::Process()` here computes `key = HMAC-MD5(MD5(nonce),
   client_key)` and sends it back as `PanelResponse(key)` — exactly the
   value `gauthd`'s `PanelResponse::Process()` recomputes and compares
   against.
3. On `PanelResponse_Re(result)`, if `result == ERR_SUCCESS`, the session on
   the `gauthd` side is switched to `state_GPanelServer`, which now accepts
   `MySQLStorage` — and this client immediately sends one.

## The query

[panelresponse_re.hpp](../cnet/gpanelclient/panelresponse_re.hpp)'s success
branch is the entire "business logic" of this tool:

```cpp
static const char * ConstStr = "SELECT COUNT(*) FROM users";
...
MySQLStorage MySqlSrt(1,0,0);
MySqlSrt.input_str.push_back(str);
GPanelClient::GetInstance()->Send(sid, MySqlSrt);
```

That's the only query this binary can ever issue. It corroborates
`gauthd.md`'s finding that `MysqlManager::PanelQuery()` forwards the client's
`input_str` straight to `MysqlSender()` with no allow-listing — a `users`
table is assumed to exist and be queryable with no further authorization
beyond the HMAC handshake above.

## Config

[gamesys.conf](../cnet/gpanelclient/gamesys.conf) targets `127.0.0.1:29900`
with `client_key = x5Jh9Xzu3x2skCLxAMXF1ZtR8l4nZ7d`. As noted in
[gauthd.md](gauthd.md#config), the shipped `gauthd.conf` has **no
`[GPanelServer]` section at all**, so `gauthd`'s own `client_key` (read
unconditionally at startup) resolves to an empty string as shipped — meaning
this client's real secret has no matching value to authenticate against in
the one `gauthd` config present in this leak. Whether a real deployment's
`gauthd.conf` carries the matching key isn't resolvable from this leak
alone.

## Build

**`gpanelclient`/`gpanel` is not referenced anywhere in `build.sh`** — no
`make`, no install `cp`, nothing. Every other daemon and client documented
in this series is at least referenced by the build script (even without a
surviving `Makefile`); this one is absent from the build pipeline entirely,
consistent with it being a throwaway test harness rather than a shipped
component. No `Makefile` exists in `cnet/gpanelclient/` either, and — unlike
every daemon documented so far — there's no prebuilt binary checked in.

## Oddities

- **The entire client does exactly one thing**: authenticate, then run a
  single hardcoded `SELECT COUNT(*) FROM users`. There is no command
  interface of any kind — contrast with `gacdclient`'s interactive
  `Commander` REPL for the structurally similar anti-cheat control channel.
- **No reconnect logic** — `GPanelClient::OnDelSession`/`OnAbortSession`
  don't schedule a retry, unlike every other `*Client` manager in this
  codebase's consistent `Reconnect()`/exponential-backoff pattern.
- **Absent from `build.sh` entirely** — not even a stub build step, unlike
  every other component documented in this series.
- **`RPC_GMYSQLSTORAGE`/`GMySQLStorage` is declared and stubbed but never
  called** — dead protocol surface carried over from the shared `gauthd`
  protocol family (`gauthd` also declares this RPC id in its own
  `callid.hxx`, per `gauthd.md`) without any code in this client that
  actually issues it.
- **The `client_key` in this client's config has no matching
  `[GPanelServer]` section in the one `gauthd.conf` shipped in this leak** —
  see Config, above, and `gauthd.md`.
