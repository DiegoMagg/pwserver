#ifndef __GNET_LIB_LICENSE_H
#define __GNET_LIB_LICENSE_H

#include <pthread.h>
#include "licenseconst.h"
#include "VirtualizerSDK.h"

extern int MyGlobalVarStealth;
void MyFunctionStealthCodeArea(void);

extern int NnwP4BtXFg4CG179eUlroFIlI8RoCQn;
#define SUCCESS NnwP4BtXFg4CG179eUlroFIlI8RoCQn
#define LIC IGVlWBieGwYRrv8V7wmDYaZDgMOcSzn

#define VM_BEGIN	VIRTUALIZER_TIGER_BLACK_START; \
			if (MyGlobalVarStealth == 0x11223344) \
				MyFunctionStealthCodeArea(); 
				
#define VM_END		VIRTUALIZER_TIGER_BLACK_END;

namespace GNET
{

class LicenseInterfaces
{
public:

	static bool Init(const char * m_ip , unsigned short m_port , const char * m_login , const char * m_pass, const char * service, int & result);
	static __int128 Check(__int128 v);
	static __int128 Value(__int128 v);
	static bool Complete();
	static pthread_mutex_t license_mutex;
public:	
	
};

#define LIC_MAX_ONLINE 			(LicenseInterfaces::Check(SUCCESS ^ HHH_MAX_ONLINE 			)  == ( SUCCESS ^ XOR_MAX_ONLINE 			) * ( LicenseInterfaces::Value(VAL_MAX_ONLINE 			) ^ SUCCESS ))
#define LIC_INIT_SERVICE		(LicenseInterfaces::Check(SUCCESS ^ HHH_INIT_SERVICE		)  == ( SUCCESS ^ XOR_INIT_SERVICE			) * ( LicenseInterfaces::Value(VAL_INIT_SERVICE			) ^ SUCCESS ))
#define LIC_INVALID_LICENSE		(LicenseInterfaces::Check(SUCCESS ^ HHH_INVALID_LICENSE		)  == ( SUCCESS ^ XOR_INVALID_LICENSE		) * ( LicenseInterfaces::Value(VAL_INVALID_LICENSE		) ^ SUCCESS ))
#define LIC_GET_CONF_FILE		(LicenseInterfaces::Check(SUCCESS ^ HHH_GET_CONF_FILE		)  == ( SUCCESS ^ XOR_GET_CONF_FILE			) * ( LicenseInterfaces::Value(VAL_GET_CONF_FILE		) ^ SUCCESS ))
#define LIC_XOR_SIZE_MALLOC		(LicenseInterfaces::Check(SUCCESS ^ HHH_XOR_SIZE_MALLOC		)  == ( SUCCESS ^ XOR_XOR_SIZE_MALLOC		) * ( LicenseInterfaces::Value(VAL_XOR_SIZE_MALLOC		) ^ SUCCESS ))
#define LIC_DELETE_FREE			(LicenseInterfaces::Check(SUCCESS ^ HHH_DELETE_FREE			)  == ( SUCCESS ^ XOR_DELETE_FREE			) * ( LicenseInterfaces::Value(VAL_DELETE_FREE			) ^ SUCCESS ))
#define LIC_LUA_INIT			(LicenseInterfaces::Check(SUCCESS ^ HHH_LUA_INIT			)  == ( SUCCESS ^ XOR_LUA_INIT				) * ( LicenseInterfaces::Value(VAL_LUA_INIT				) ^ SUCCESS ))
#define LIC_FREE_OCTETS			(LicenseInterfaces::Check(SUCCESS ^ HHH_FREE_OCTETS			)  == ( SUCCESS ^ XOR_FREE_OCTETS			) * ( LicenseInterfaces::Value(VAL_FREE_OCTETS			) ^ SUCCESS ))
#define LIC_SLEEP_PROCESS		(LicenseInterfaces::Check(SUCCESS ^ HHH_SLEEP_PROCESS		)  == ( SUCCESS ^ XOR_SLEEP_PROCESS			) * ( LicenseInterfaces::Value(VAL_SLEEP_PROCESS		) ^ SUCCESS ))
#define LIC_GET_ROLE_LIST		(LicenseInterfaces::Check(SUCCESS ^ HHH_GET_ROLE_LIST		)  == ( SUCCESS ^ XOR_GET_ROLE_LIST			) * ( LicenseInterfaces::Value(VAL_GET_ROLE_LIST		) ^ SUCCESS ))
#define LIC_OOG_LIMITS			(LicenseInterfaces::Check(SUCCESS ^ HHH_OOG_LIMITS			)  == ( SUCCESS ^ XOR_OOG_LIMITS			) * ( LicenseInterfaces::Value(VAL_OOG_LIMITS			) ^ SUCCESS ))
#define LIC_MAX_CONNECT			(LicenseInterfaces::Check(SUCCESS ^ HHH_MAX_CONNECT			)  == ( SUCCESS ^ XOR_MAX_CONNECT			) * ( LicenseInterfaces::Value(VAL_MAX_CONNECT			) ^ SUCCESS ))
#define LIC_MAX_GAMEDATASEND	(LicenseInterfaces::Check(SUCCESS ^ HHH_MAX_GAMEDATASEND	)  == ( SUCCESS ^ XOR_MAX_GAMEDATASEND		) * ( LicenseInterfaces::Value(VAL_MAX_GAMEDATASEND		) ^ SUCCESS ))
#define LIC_MAX_KEEP_ALIVE		(LicenseInterfaces::Check(SUCCESS ^ HHH_MAX_KEEP_ALIVE		)  == ( SUCCESS ^ XOR_MAX_KEEP_ALIVE		) * ( LicenseInterfaces::Value(VAL_MAX_KEEP_ALIVE		) ^ SUCCESS ))
#define LIC_LOAD_INVENTORY		(LicenseInterfaces::Check(SUCCESS ^ HHH_LOAD_INVENTORY		)  == ( SUCCESS ^ XOR_LOAD_INVENTORY		) * ( LicenseInterfaces::Value(VAL_LOAD_INVENTORY		) ^ SUCCESS ))
#define LIC_LOAD_ROLE			(LicenseInterfaces::Check(SUCCESS ^ HHH_LOAD_ROLE			)  == ( SUCCESS ^ XOR_LOAD_ROLE				) * ( LicenseInterfaces::Value(VAL_LOAD_ROLE			) ^ SUCCESS ))
#define LIC_SAVE_INVENTORY		(LicenseInterfaces::Check(SUCCESS ^ HHH_SAVE_INVENTORY		)  == ( SUCCESS ^ XOR_SAVE_INVENTORY		) * ( LicenseInterfaces::Value(VAL_SAVE_INVENTORY		) ^ SUCCESS ))
#define LIC_SAVE_ROLE			(LicenseInterfaces::Check(SUCCESS ^ HHH_SAVE_ROLE			)  == ( SUCCESS ^ XOR_SAVE_ROLE				) * ( LicenseInterfaces::Value(VAL_SAVE_ROLE			) ^ SUCCESS ))
#define LIC_LOAD_FACTION		(LicenseInterfaces::Check(SUCCESS ^ HHH_LOAD_FACTION		)  == ( SUCCESS ^ XOR_LOAD_FACTION			) * ( LicenseInterfaces::Value(VAL_LOAD_FACTION			) ^ SUCCESS ))
#define LIC_LOAD_DOMAIN			(LicenseInterfaces::Check(SUCCESS ^ HHH_LOAD_DOMAIN			)  == ( SUCCESS ^ XOR_LOAD_DOMAIN			) * ( LicenseInterfaces::Value(VAL_LOAD_DOMAIN			) ^ SUCCESS ))
#define LIC_LOAD_DOMAIN2		(LicenseInterfaces::Check(SUCCESS ^ HHH_LOAD_DOMAIN2		)  == ( SUCCESS ^ XOR_LOAD_DOMAIN2			) * ( LicenseInterfaces::Value(VAL_LOAD_DOMAIN2			) ^ SUCCESS ))
#define LIC_GSHOP_ADD_GOLD		(LicenseInterfaces::Check(SUCCESS ^ HHH_GSHOP_ADD_GOLD		)  == ( SUCCESS ^ XOR_GSHOP_ADD_GOLD		) * ( LicenseInterfaces::Value(VAL_GSHOP_ADD_GOLD		) ^ SUCCESS ))
#define LIC_MAX_ROLE_MEMBER		(LicenseInterfaces::Check(SUCCESS ^ HHH_MAX_ROLE_MEMBER		)  == ( SUCCESS ^ XOR_MAX_ROLE_MEMBER		) * ( LicenseInterfaces::Value(VAL_MAX_ROLE_MEMBER		) ^ SUCCESS ))
#define LIC_GET_FACTION			(LicenseInterfaces::Check(SUCCESS ^ HHH_GET_FACTION			)  == ( SUCCESS ^ XOR_GET_FACTION			) * ( LicenseInterfaces::Value(VAL_GET_FACTION			) ^ SUCCESS ))
#define LIC_INIT_MYSQL			(LicenseInterfaces::Check(SUCCESS ^ HHH_INIT_MYSQL			)  == ( SUCCESS ^ XOR_INIT_MYSQL			) * ( LicenseInterfaces::Value(VAL_INIT_MYSQL			) ^ SUCCESS ))
#define LIC_LOAD_STATE			(LicenseInterfaces::Check(SUCCESS ^ HHH_LOAD_STATE			)  == ( SUCCESS ^ XOR_LOAD_STATE			) * ( LicenseInterfaces::Value(VAL_LOAD_STATE			) ^ SUCCESS ))
#define LIC_LOAD_ELEMENTS_DATA	(LicenseInterfaces::Check(SUCCESS ^ HHH_LOAD_ELEMENTS_DATA	)  == ( SUCCESS ^ XOR_LOAD_ELEMENTS_DATA	) * ( LicenseInterfaces::Value(VAL_LOAD_ELEMENTS_DATA	) ^ SUCCESS ))
#define LIC_LOAD_TASK_DATA		(LicenseInterfaces::Check(SUCCESS ^ HHH_LOAD_TASK_DATA		)  == ( SUCCESS ^ XOR_LOAD_TASK_DATA		) * ( LicenseInterfaces::Value(VAL_LOAD_TASK_DATA		) ^ SUCCESS ))
#define LIC_LOAD_GSHOP_DATA		(LicenseInterfaces::Check(SUCCESS ^ HHH_LOAD_GSHOP_DATA		)  == ( SUCCESS ^ XOR_LOAD_GSHOP_DATA		) * ( LicenseInterfaces::Value(VAL_LOAD_GSHOP_DATA		) ^ SUCCESS ))
#define LIC_GET_ROLE			(LicenseInterfaces::Check(SUCCESS ^ HHH_GET_ROLE			)  == ( SUCCESS ^ XOR_GET_ROLE				) * ( LicenseInterfaces::Value(VAL_GET_ROLE				) ^ SUCCESS ))
#define LIC_PUT_ROLE			(LicenseInterfaces::Check(SUCCESS ^ HHH_PUT_ROLE			)  == ( SUCCESS ^ XOR_PUT_ROLE				) * ( LicenseInterfaces::Value(VAL_PUT_ROLE				) ^ SUCCESS ))
#define LIC_MUTEX_SPINLOK		(LicenseInterfaces::Check(SUCCESS ^ HHH_MUTEX_SPINLOK		)  == ( SUCCESS ^ XOR_MUTEX_SPINLOK			) * ( LicenseInterfaces::Value(VAL_MUTEX_SPINLOK		) ^ SUCCESS ))







































};

#endif	


