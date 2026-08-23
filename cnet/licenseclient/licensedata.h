//------------------------------------------------------------------------------------------------------------------------
//-- LICENSE DATA BASE 2023 (C) deadraky
//------------------------------------------------------------------------------------------------------------------------
#ifndef __LICENSE_DATA_H
#define __LICENSE_DATA_H

#include <cstddef>
#include <cstring>

#include "licenseconst.h"

#pragma pack(push, 1)

namespace GNET
{

struct LicenseDataBase
{
	enum : int
	{
		KEY1 = 71,
		KET2 = 1041,
		KEY3 = 137197,
		KEY4 = 713108732,
	};
	
	int key[4];
	
	// all service 
	__int128 MAX_ONLINE;
	__int128 INIT_SERVICE;
	__int128 INVALID_LICENSE;
	__int128 GET_CONF_FILE;
	__int128 XOR_SIZE_MALLOC;
	__int128 DELETE_FREE;
	__int128 LUA_INIT;
	__int128 FREE_OCTETS;
	__int128 SLEEP_PROCESS;
	
	// glinkd
	__int128 GET_ROLE_LIST;
	__int128 OOG_LIMITS;
	__int128 MAX_CONNECT;
	__int128 MAX_GAMEDATASEND;
	__int128 MAX_KEEP_ALIVE;
	
	// gamedbd 
	__int128 LOAD_INVENTORY;
	__int128 LOAD_ROLE;
	__int128 SAVE_INVENTORY;
	__int128 SAVE_ROLE;
	__int128 LOAD_FACTION;
	
	// gdeliveryd
	__int128 LOAD_DOMAIN;
	__int128 LOAD_DOMAIN2;
	__int128 GSHOP_ADD_GOLD;
	
	// gfaction
	__int128 MAX_ROLE_MEMBER;
	__int128 GET_FACTION;
	
	// gauthd
	__int128 INIT_MYSQL;
	
	//gs
	__int128 LOAD_STATE;
	__int128 LOAD_ELEMENTS_DATA;
	__int128 LOAD_TASK_DATA;
	__int128 LOAD_GSHOP_DATA;
	__int128 GET_ROLE;
	__int128 PUT_ROLE;
	__int128 MUTEX_SPINLOK;
	__int128 INIT_ALL_ADDON;

	inline LicenseDataBase()
	{
		memset(this, 0x00, sizeof(*this));
	}

	inline void set_key(int _id, int _start, int _end, int _ip)
	{
		key[0] = _id ^ KEY3 ^ KET2;
		key[1] = _start ^ KEY4 ^ KEY3;
		key[2] = _end ^ KET2 ^ KEY1;
		key[3] = _ip ^ KEY4 ^ KEY1;
	}

	inline __int128 m_MAX_ONLINE 			() { return *(__int128*)key ^ MAX_ONLINE 		; }
	inline __int128 m_INIT_SERVICE		    () { return *(__int128*)key ^ INIT_SERVICE		; }
	inline __int128 m_INVALID_LICENSE		() { return *(__int128*)key ^ INVALID_LICENSE	; }
	inline __int128 m_GET_CONF_FILE			() { return *(__int128*)key ^ GET_CONF_FILE		; }
	inline __int128 m_XOR_SIZE_MALLOC		() { return *(__int128*)key ^ XOR_SIZE_MALLOC	; }
	inline __int128 m_DELETE_FREE			() { return *(__int128*)key ^ DELETE_FREE		; }
	inline __int128 m_LUA_INIT			    () { return *(__int128*)key ^ LUA_INIT			; }
	inline __int128 m_FREE_OCTETS			() { return *(__int128*)key ^ FREE_OCTETS		; }
	inline __int128 m_SLEEP_PROCESS			() { return *(__int128*)key ^ SLEEP_PROCESS		; }
	inline __int128 m_GET_ROLE_LIST			() { return *(__int128*)key ^ GET_ROLE_LIST		; }
	inline __int128 m_OOG_LIMITS			() { return *(__int128*)key ^ OOG_LIMITS		; }
	inline __int128 m_MAX_CONNECT			() { return *(__int128*)key ^ MAX_CONNECT		; }
	inline __int128 m_MAX_GAMEDATASEND	    () { return *(__int128*)key ^ MAX_GAMEDATASEND	; }
	inline __int128 m_MAX_KEEP_ALIVE		() { return *(__int128*)key ^ MAX_KEEP_ALIVE	; }
	inline __int128 m_LOAD_INVENTORY		() { return *(__int128*)key ^ LOAD_INVENTORY	; }
	inline __int128 m_LOAD_ROLE				() { return *(__int128*)key ^ LOAD_ROLE			; }
	inline __int128 m_SAVE_INVENTORY		() { return *(__int128*)key ^ SAVE_INVENTORY	; }
	inline __int128 m_SAVE_ROLE				() { return *(__int128*)key ^ SAVE_ROLE			; }
	inline __int128 m_LOAD_FACTION		    () { return *(__int128*)key ^ LOAD_FACTION		; }
	inline __int128 m_LOAD_DOMAIN			() { return *(__int128*)key ^ LOAD_DOMAIN		; }
	inline __int128 m_LOAD_DOMAIN2		    () { return *(__int128*)key ^ LOAD_DOMAIN2		; }
	inline __int128 m_GSHOP_ADD_GOLD		() { return *(__int128*)key ^ GSHOP_ADD_GOLD	; }
	inline __int128 m_MAX_ROLE_MEMBER		() { return *(__int128*)key ^ MAX_ROLE_MEMBER	; }
	inline __int128 m_GET_FACTION			() { return *(__int128*)key ^ GET_FACTION		; }
	inline __int128 m_INIT_MYSQL			() { return *(__int128*)key ^ INIT_MYSQL		; }
	inline __int128 m_LOAD_STATE			() { return *(__int128*)key ^ LOAD_STATE		; }
	inline __int128 m_LOAD_ELEMENTS_DATA	() { return *(__int128*)key ^ LOAD_ELEMENTS_DATA; }
	inline __int128 m_LOAD_TASK_DATA		() { return *(__int128*)key ^ LOAD_TASK_DATA	; }
	inline __int128 m_LOAD_GSHOP_DATA		() { return *(__int128*)key ^ LOAD_GSHOP_DATA	; }
	inline __int128 m_GET_ROLE			    () { return *(__int128*)key ^ GET_ROLE			; }
	inline __int128 m_PUT_ROLE			    () { return *(__int128*)key ^ PUT_ROLE			; }
	inline __int128 m_MUTEX_SPINLOK			() { return *(__int128*)key ^ MUTEX_SPINLOK		; }
	
};

}

#pragma pack(pop)
#endif	