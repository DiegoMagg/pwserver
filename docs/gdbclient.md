# gdbclient

**Path:** [cnet/gdbclient/](../cnet/gdbclient/)
**Type:** client-side RPC library (`libdbCli.a`) + two small daemon/test binaries
**Files:** 231 (mostly `*.hrp` RPC call definitions)

## Purpose

`gdbclient` is the client half of the connection between the game-side services
(`gamed`, `gfaction`, `gclient`, …) and the database server, referred to in comments
and `io.conf` as **`gamedbd`** / **`GamedbServer`**. It talks the custom GNET RPC
protocol over TCP (default port `9009`, see [io.conf](../cnet/gdbclient/io.conf)).

Only the client side ships in this leak. `gamedbd` itself (the RPC *server*
implementation) is not present — `db_if.h` even comments-reference source files
like `gamedbd/abstractplayers.cpp` and `gamedbd/dbwebtradesold.hrp` that don't
exist in this tree.

## Key files

| File | Role |
|---|---|
| [gamedbclient.hpp](../cnet/gdbclient/gamedbclient.hpp) / [.cpp](../cnet/gdbclient/db_if.cpp) | `GamedbClient`: singleton `Protocol::Manager` holding the TCP session to `GamedbServer`, with auto-reconnect + exponential backoff (`BACKOFF_INIT=4` → `BACKOFF_DEADLINE=32`) |
| [gdbclient.cpp](../cnet/gdbclient/gdbclient.cpp) | Production `main()` — `gdbclient <configfile>`, starts `GamedbClient` + the IO thread pool |
| [dbclient.cpp](../cnet/gdbclient/dbclient.cpp) | Secondary `main()`, a dev/test harness (`TestTask`) exercising `GETROLE`/`PUTROLE2`; mostly commented-out example code, not part of the `build.sh` build path |
| [callid.hxx](../cnet/gdbclient/callid.hxx) | `enum CallID` — one `RPC_*` numeric id per call (e.g. `RPC_GETROLE=3005`; `PUTROLEDATA`/`GETROLEDATA` use an `8xxx` range) |
| [state.hxx](../cnet/gdbclient/state.hxx) / [state.cxx](../cnet/gdbclient/state.cxx) | `state_GameDBClient` — the whitelist of `Protocol::Type` ids this session will accept |
| [stubs.cxx](../cnet/gdbclient/stubs.cxx) | Aggregate `#include` of every `*.hrp`, pulled in wholesale by consumers that need the full call set |
| [db_if.h](../cnet/gdbclient/db_if.h) / [db_os.h](../cnet/gdbclient/db_os.h) | Shared interface: `DBMASK_PUT_*` flags, `base_info`, OS glue — public headers exposed to `gamed` via `build.sh`'s `iolib/inc` symlinks |
| [io.conf](../cnet/gdbclient/io.conf) | `GamedbServer`/`GamedbClient` socket config + `ThreadPool` sizing |
| `main/` | Stray directory of **broken** relative symlinks (`../db_if.h`, `../getluastorage.hrp`, …) — dead build cruft, not resolvable in this tree |

## RPC call catalog

Each `*.hrp` (204 files) / `*.hpp` (10 files) defines one `Rpc`-derived class with
`Client()` / `Server()` / `OnTimeout()` handlers for a single call id from
`callid.hxx`. Grouped by feature area:

- **Account / session** — `putuser`, `getuser`, `deluser`, `queryuserid`, `getuserroles`, `roleid2uid`, `uid2logicuid`, `forbiduser`, `dbforbiduser`
- **Role CRUD & identity** — `dbcreaterole`, `delrole`, `dbdeleterole`, `dbundodeleterole`, `dbcopyrole`, `renamerole`, `canchangerolename`, `dbplayerrename`, `dbplayerchangeclass`, `dbplayerchangegender`, `dbverifymaster`, `playeridentitymatch`, `getrole`, `getroleinfo`, `getrolebase`/`putrolebase`, `getrolebasestatus`, `activateplayerdata`, `freezeplayerdata`, `touchplayerdata`, `delplayerdata`, `fetchplayerdata`, `saveplayerdata`, `delroleannounce`
- **Role sub-records** — `getrolepocket`/`putrolepocket`, `getrolestatus`/`putrolestatus`, `getroleequipment`/`putroleequipment`, `getroletask`/`putroletask`, `getroledata`/`putroledata`, `getrolestorehouse`/`putrolestorehouse`, `getroleforbid`/`putroleforbid`, `getnewroledetail`/`setnewroledetail` (+ `extend` variants), `clearstorehousepasswd`, `dbmappasswordload`/`dbmappasswordsave`
- **Cash / currency** — `getmoneyinventory`/`putmoneyinventory`, `getcashtotal`, `addcash`/`addcash_re`, `debugaddcash`, `setcashpassword`, `getaddcashsn`, `dbbuypoint`/`transbuypoint`, `dbsellpoint`/`dbsellcancel`/`dbselltimeout`, `dbsyncsellinfo`/`syncsellinfo`, `dbexchangeconsumepoints`, `dbgetconsumeinfos`, `dbputconsumepoints`, `dbstockbalance`/`dbstockcancel`/`dbstockcommission`/`dbstockload`/`dbstocktransaction` (stock/investment system), `dbsysauctioncashspend`/`dbsysauctioncashtransfer`, `dbautolockget`/`dbautolockset`/`dbautolocksetoffline`, `cashserial`
- **Auction & web trade** — `dbauctionbid`/`cancel`/`close`/`get`/`list`/`open`/`timeout`, `dbwebtradecancelpost`/`cancelshelf`/`getrolesimpleinfo`/`load`/`loadsold`/`post`/`postexpire`/`precancelpost`/`prepost`/`shelf`/`sold`, `tradeinventory`/`tradesave`, `touchtrade`
- **Personal shop (pshop)** — `dbpshopactive`, `dbpshopbuy`, `dbpshopcancelgoods`, `dbpshopcleargoods`, `dbpshopcreate`, `dbpshopdrawitem`, `dbpshopget`, `dbpshopload`, `dbpshopmanagefund`, `dbpshopplayerbuy`, `dbpshopplayersell`, `dbpshopsell`, `dbpshopsettype`, `dbpshoptimeout`
- **Mail** — `dbgetmail`, `dbgetmaillist`, `dbgetmailattach`, `dbsendmail`, `dbsendmassmail`, `dbdeletemail`, `dbsetmailattr`, `dbsysmail3`, `getmessage`/`putmessage`
- **Faction & fortress** — `dbcreatefactionfortress`, `dbdelfactionfortress`, `dbfactionfortresschallenge`, `dbfactionfortressload`, `dbputfactionfortress`, `dbfactionrename`, `dbfactionresourcebattlebonus`, `mnfactioninfoupdate`, `dbmnfactioninfoget`/`put`, `dbmnfactionapplyinfoget`/`put`/`resnotify`, `dbmnfactionbattleapply`, `dbmnfactionstateupdate`, `dbmndomaininfoupdate`, `dbmnputbattlebonus`, `dbmnsendbattlebonus`, `dbmnsendbonusnotify`
- **Battle / PvP** — `dbbattlebonus`, `dbbattlechallenge`, `dbbattleend`, `dbbattleload`, `dbbattlemail`, `dbbattleset`, `dbcountrybattlebonus`, `dbtankbattlebonus`
- **King Election** — `dbkecandidateapply`, `dbkecandidateconfirm`, `dbkedeletecandidate`, `dbkedeleteking`, `dbkekingconfirm`, `dbkeload`, `dbkevoting`
- **Arena** — `dbdeletearenateam`, `ec_dbarenaplayertoplist`, `ec_dbarenateamtoplist`
- **Social** — `getfriendlist`/`putfriendlist`, `dbfriendextlist_re`, `dbplayerrequitefriend`, `dbplayeraskforpresent`/`dbplayergivepresent`, `putspouse`
- **Referral program** — `dbrefgetreferral`, `dbrefgetreferrer`, `dbrefupdatereferral`, `dbrefupdatereferrer`, `dbrefwithdrawtrans`
- **GameTalk (cross-server)** — `dbgametalkfactioninfo`, `dbgametalkroleinfo`, `dbgametalkrolelist`, `dbgametalkrolerelation`, `dbgametalkrolestatus`
- **Rewards / solo content** — `dbgetreward`, `dbputrewardbonus`, `dbrewardmature`, `dbsolochallengerankload`/`dbsolochallengeranksave`
- **Global/task data** — `gettaskdatarpc`/`puttaskdatarpc`, `dbloadglobalcontrol`/`dbputglobalcontrol`, `dbforceload`/`dbputforce`, `dbupdateplayercrossinfo`
- **Lua storage** — `getluastorage`/`setluastorage` (duplicated, unusably, in `main/`)
- **Trashbox** — `getnewtrashbox`/`setnewtrashbox` (duplicated, unusably, in `main/`)
- **Unique data** — `dbuniquedataload`/`dbuniquedatasave`
- **Transactions** — `transactionabort`, `transactionacquire`, `transactioncommit`
- **Misc** — `announcezonegroup`

## Database backend (server side, `gamedbd`)

`gamedbd` itself isn't in this leak, but [share/storage/storage.h](../share/storage/storage.h)
shows what it's built against — a pluggable embedded key/value store, picked at
compile time by one `#define`:

| Macro | Backend | Header |
|---|---|---|
| `USE_BDB` | Real **Berkeley DB 4** (`db_cxx.h`) | [storagebdb.h](../share/storage/storagebdb.h) |
| `USE_CDB` | Berkeley DB 4 again, wrapped with an extra cache layer | [storagecdb.h](../share/storage/storagecdb.h) |
| `USE_WDB` | **"World2 db"** — Perfect World's own in-house engine, reimplementing a BDB-like API (own `db.h`, own `DB_NOOVERWRITE`/`DB_OK`/… constants) instead of linking real Berkeley DB | [storagewdb.h](../share/storage/storagewdb.h) |

[share/storage/bdbwdb_convert](../share/storage/bdbwdb_convert) and
[convertdb.cpp](../share/storage/convertdb.cpp) are a migration tool between the
BDB and WDB on-disk formats, which confirms those two are the real deployment
options (CDB reads like an intermediate/alt variant). No Makefile in this leak
actually defines `USE_BDB`/`USE_CDB`/`USE_WDB`, so which backend ships by default
is unknown — same gap as the missing `gdbclient` Makefile below.

Role data itself is stored as **marshaled binary blobs** (`Marshal::OctetsStream`,
matching what `gdbclient`'s `.hrp` calls send over the wire) keyed by role/user id —
this is a KV blob store, not a relational schema with columns per field.

### Not the same database as account auth

`gdbclient`/`gamedbd` is unrelated to how login accounts are authenticated:
`cnet/gauthd` (`gauthd.cpp`, `authmanager.cpp`) talks to **MySQL directly** via its
own `GMysqlClient`/`MysqlManager`, for account/password-hash lookups. `cgame/gs`
also embeds a separate `GMysqlManager`/`gmysqlclient` ([cgame/gs/gmysql_manager.h](../cgame/gs/gmysql_manager.h))
for misc side data (e.g. Lua storage), independent of both `gauthd`'s MySQL
connection and the `gdbclient`→`gamedbd` role store. In short: **auth = MySQL,
role/player persistence = BDB/CDB/WDB via gdbclient, plus a third standalone
MySQL connector inside the game server for miscellaneous data.**

## Build

- No `Makefile` ships inside `cnet/gdbclient` itself (contrast with e.g. `cnet/logclient/Makefile.gs`).
- Top-level [build.sh](../build.sh) (~line 138) still runs `cd gdbclient && make clean && make lib -j32`, expecting a `lib` target that produces `libdbCli.a`. Either the Makefile is missing from this leak, or it's meant to be generated from the `share/mk` templates that `build.sh` symlinks into `cnet/mk` during setup.
- Consumers (`gamed`, etc.) link `libdbCli.a` and pick up `db_if.h`/`db_os.h` as public headers via the `iolib/inc` symlink step in `build.sh`.

## Notes / oddities

- `main/` is dead: its files are broken relative symlinks (`../db_if.h`, …) that don't resolve inside the repo.
- `dbclient.cpp` reads as leftover developer test code, not a real second binary target.
- The client only ever *calls* `gamedbd` — the actual DB server implementation (schema, query logic) is absent from this leak.
