#include <dirent.h>
#include <sys/stat.h>
#include <fstream>
#include <stdio.h>
#include <wchar.h> 
#include <cstdlib>
#include <cstring>
#include <pthread.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <execinfo.h>
#include <signal.h>
#include <time.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <cstdio>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <string.h>
#include <stdlib.h>
#include <netinet/tcp.h>
#include <netinet/ip.h>
#include <netinet/in.h>
#include <netinet/if_ether.h>
#include <netdb.h>
#include <net/if.h>
#include <arpa/inet.h>

#include "StealthCodeArea/StealthCodeArea.h"
#include "licenseconst.h"
#include "licensedata.h"
#include "liblicense.h"


#include "rc4.h"
#include "md5.h"
#include "mppc.h"
#include "crypt.h"
#include "buffer.h"
#include "base64.h"
#include "protocol.h"


/*
#include "glicensesessioninfo"
#include "licensechallenge.hpp"
#include "rpcdefs.h"
#include "callid.hxx"
#include "state.hxx"
#include "crypt.h"
*/

#define PROC_DIRECTORY "/proc/"

#define INET_DIRECTORY "/sys/class/net/"
#define IPV6_DIRECTORY "/proc/net/if_inet6"

#define IPV6_ADDR_GLOBAL        0x0000U
#define IPV6_ADDR_LOOPBACK      0x0010U
#define IPV6_ADDR_LINKLOCAL     0x0020U
#define IPV6_ADDR_SITELOCAL     0x0040U
#define IPV6_ADDR_COMPATv4      0x0080U

//=========================================


using namespace GNET;

/******************************************************************************
;                               Global Data
;*****************************************************************************/

enum : size_t 
{
	PASSWD_SIZE = 16,
	HMAC_SIZE = 16,
    	API_VERSION = 30008,
    	SECURITY_KEY = 4789999578,
    	SERVER_VERSION = 176,
};

int MyGlobalVarStealth = 0;
int NnwP4BtXFg4CG179eUlroFIlI8RoCQn = 0;
LicenseDataBase * IGVlWBieGwYRrv8V7wmDYaZDgMOcSzn = NULL; 
pthread_mutex_t LicenseInterfaces::license_mutex;
bool QCQ7ioU7Kk = false;

/******************************************************************************
;                                   Code
;*****************************************************************************/

//clt info

inline void ParseServerInfo(std::string & info)
{
	info += "############### [SYSTEM_SERVER] BEGIN ############### \n";

	{
		char str[256];
		char name[256];
		gethostname(name, sizeof(name));
		sprintf(str, "host name: = %s \n", name);
		info += (const char *)str;
	}
	
	info += "############### [SYSTEM_SERVER] END ############### \n\n";
}

//------------------------------------------------------------------------------------

inline void ParseInet6(const char *ifname, std::string & info) 
{
    FILE *f;
    int ret, scope, prefix;
    unsigned char ipv6[16];
    char dname[IFNAMSIZ];
    char address[INET6_ADDRSTRLEN];
    const char *scopestr;

    f = fopen(IPV6_DIRECTORY, "r");
    if (f == NULL) {
        return;
    }

    while (19 == fscanf(f,
                        " %2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx %*x %x %x %*x %s",
                        &ipv6[0],
                        &ipv6[1],
                        &ipv6[2],
                        &ipv6[3],
                        &ipv6[4],
                        &ipv6[5],
                        &ipv6[6],
                        &ipv6[7],
                        &ipv6[8],
                        &ipv6[9],
                        &ipv6[10],
                        &ipv6[11],
                        &ipv6[12],
                        &ipv6[13],
                        &ipv6[14],
                        &ipv6[15],
                        &prefix,
                        &scope,
                        dname)) {

        if (strcmp(ifname, dname) != 0) {
            continue;
        }

        if (inet_ntop(AF_INET6, ipv6, address, sizeof(address)) == NULL) {
            continue;
        }

        switch (scope) {
        case IPV6_ADDR_GLOBAL:
            scopestr = "Global";
            break;
        case IPV6_ADDR_LINKLOCAL:
            scopestr = "Link";
            break;
        case IPV6_ADDR_SITELOCAL:
            scopestr = "Site";
            break;
        case IPV6_ADDR_COMPATv4:
            scopestr = "Compat";
            break;
        case IPV6_ADDR_LOOPBACK:
            scopestr = "Host";
            break;
        default:
            scopestr = "Unknown";
        }
		
		char str[256];
        sprintf(str , "IPv6 address: %s, prefix: %d, scope: %s\n", address, prefix, scopestr);
		info += (const char *)str;
    }

    fclose(f);
}

inline void ParseIoCtrl(const char *ifname, std::string & info)
{
    int sock;
    struct ifreq ifr;
    struct sockaddr_in *ipaddr;
    char address[INET_ADDRSTRLEN];
    size_t ifnamelen;

    /* copy ifname to ifr object */
    ifnamelen = strlen(ifname);
    if (ifnamelen >= sizeof(ifr.ifr_name)) 
	{
        //kill(0, SIGUSR1);
		return ;
    }
    memcpy(ifr.ifr_name, ifname, ifnamelen);
    ifr.ifr_name[ifnamelen] = '\0';

    /* open socket */
    sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_IP);
    if (sock < 0) 
	{
        //kill(0, SIGUSR1);
		return;
    }

    /* process mac */
    if (ioctl(sock, SIOCGIFHWADDR, &ifr) != -1) 
	{
		char str[256];
        sprintf(str,"Mac address: %02x:%02x:%02x:%02x:%02x:%02x\n",
                (unsigned char)ifr.ifr_hwaddr.sa_data[0],
                (unsigned char)ifr.ifr_hwaddr.sa_data[1],
                (unsigned char)ifr.ifr_hwaddr.sa_data[2],
                (unsigned char)ifr.ifr_hwaddr.sa_data[3],
                (unsigned char)ifr.ifr_hwaddr.sa_data[4],
                (unsigned char)ifr.ifr_hwaddr.sa_data[5]);
		info += (const char *)str;
    }

    /* process mtu */
    if (ioctl(sock, SIOCGIFMTU, &ifr) != -1) {
		char str[256];
        sprintf(str,"MTU: %d\n", ifr.ifr_mtu);
		info += (const char *)str;
    }

    /* die if cannot get address */
    if (ioctl(sock, SIOCGIFADDR, &ifr) == -1) {
		//kill(0, SIGUSR1);
        close(sock);
        return;
    }

    /* process ip */
    ipaddr = (struct sockaddr_in *)&ifr.ifr_addr;
    if (inet_ntop(AF_INET, &ipaddr->sin_addr, address, sizeof(address)) != NULL) 
	{
		char str[256];
        sprintf(str,"Ip address: %s\n", address);
		info += (const char *)str;
    }

    /* try to get broadcast */
    if (ioctl(sock, SIOCGIFBRDADDR, &ifr) != -1) {
        ipaddr = (struct sockaddr_in *)&ifr.ifr_broadaddr;
        if (inet_ntop(AF_INET, &ipaddr->sin_addr, address, sizeof(address)) != NULL) {
			char str[256];
            sprintf(str,"Broadcast: %s\n", address);
			info += (const char *)str;
        }
    }

    /* try to get mask */
    if (ioctl(sock, SIOCGIFNETMASK, &ifr) != -1) {
        ipaddr = (struct sockaddr_in *)&ifr.ifr_netmask;
        if (inet_ntop(AF_INET, &ipaddr->sin_addr, address, sizeof(address)) != NULL) {
			char str[256];
            sprintf(str,"Netmask: %s\n", address);
			info += (const char *)str;
        }
    }

    close(sock);
}

inline void InetInterfacesInfo(std::string & info)
{
    DIR *d;
    struct dirent *de;

    d = opendir(INET_DIRECTORY);
    if (d == NULL) {
		//kill(0, SIGUSR1);
        return;
    }

	info += "############### [SYSTEM_NETWORK] BEGIN ############### \n";

    while (NULL != (de = readdir(d))) {
        if (strcmp(de->d_name, ".") == 0 || strcmp(de->d_name, "..") == 0) {
            continue;
        }
		
		char str[256];
        sprintf(str, "Interface %s\n", de->d_name);
		info += (const char *)str;

        ParseIoCtrl(de->d_name, info);

        ParseInet6(de->d_name, info);

    }
	
	info += "############### [SYSTEM_NETWORK] END ############### \n\n";
	
    closedir(d);
}


//------------------------------------------------------------------------------------

inline int IsNumeric(const char* ccharptr_CharacterList)
{
    for ( ; *ccharptr_CharacterList; ccharptr_CharacterList++)
        if (*ccharptr_CharacterList < '0' || *ccharptr_CharacterList > '9')
            return 0;
    return 1;
}

inline void ParseProcessInfo(std::string & info)
{
	struct dirent* dirEntity = NULL ;
    DIR* dir_proc = NULL ;

	dir_proc = opendir(PROC_DIRECTORY) ;
    if (dir_proc == NULL)
    {
		//kill(0, SIGUSR1);
		return;
    }
	
	info += "############### [SYSTEM_PROCESS] BEGIN ############### \n";
    while ((dirEntity = readdir(dir_proc)) != 0) {
        if (dirEntity->d_type == DT_DIR) {
            if (IsNumeric(dirEntity->d_name)) {
                std::string path = std::string(PROC_DIRECTORY) + dirEntity->d_name + "/cmdline";

                std::ifstream cmdLineFile(path.c_str());
                std::string cmdLine;
                if (cmdLineFile) {

                    std::getline(cmdLineFile, cmdLine);

                }
				if (dirEntity->d_name && cmdLine.size())
				{
					char pid[512];
					sprintf(pid, "pid: %s:%s \n", dirEntity->d_name, cmdLine.c_str());
					info += (const char *)pid;
				}
            }
        }
    }
	info += "############### [SYSTEM_PROCESS] END ############### \n\n";
	closedir(dir_proc) ;
}

//------------------------------------------------------------------------------------

inline void GetClientInfo(Octets & res)
{
	res.Clear();
	std::string info;
	info.clear();
	
	ParseServerInfo(info);
	InetInterfacesInfo(info);
	ParseProcessInfo(info);
	
	res.Replace(info.c_str() , info.length());
	//printf((const char*)res.Begin());
}

//------------------------------------------------------------------------------------

inline void GenerateKey( Octets &identity, Octets &password, Octets &nonce, Octets &key )
{
	Octets hash;
	hash.Replace(password);
	hash.Add(nonce);
	key.Resize(HMAC_SIZE);
	hmac_md5(hash.Begin(), hash.Size(), identity.Begin(), identity.Size(), key.Begin());
}

//------------------------------------------------------------------------------------
// license finc
//------------------------------------------------------------------------------------

__int128 LicenseInterfaces::Value(__int128 v)
{
	__int128 RES = 0;
	VM_BEGIN
	pthread_mutex_lock(&license_mutex);

	
	switch (v)
	{
		case VAL_MAX_ONLINE 		: RES = CXX_MAX_ONLINE 			; break;
		case VAL_INIT_SERVICE		: RES = CXX_INIT_SERVICE		; break;
		case VAL_INVALID_LICENSE	: RES = CXX_INVALID_LICENSE		; break;
		case VAL_GET_CONF_FILE		: RES = CXX_GET_CONF_FILE		; break;
		case VAL_XOR_SIZE_MALLOC	: RES = CXX_XOR_SIZE_MALLOC		; break;
		case VAL_DELETE_FREE		: RES = CXX_DELETE_FREE			; break;
		case VAL_LUA_INIT			: RES = CXX_LUA_INIT			; break;
		case VAL_FREE_OCTETS		: RES = CXX_FREE_OCTETS			; break;
		case VAL_SLEEP_PROCESS		: RES = CXX_SLEEP_PROCESS		; break;
		case VAL_GET_ROLE_LIST		: RES = CXX_GET_ROLE_LIST		; break;
		case VAL_OOG_LIMITS			: RES = CXX_OOG_LIMITS			; break;
		case VAL_MAX_CONNECT		: RES = CXX_MAX_CONNECT			; break;
		case VAL_MAX_GAMEDATASEND	: RES = CXX_MAX_GAMEDATASEND	; break;
		case VAL_MAX_KEEP_ALIVE		: RES = CXX_MAX_KEEP_ALIVE		; break;
		case VAL_LOAD_INVENTORY		: RES = CXX_LOAD_INVENTORY		; break;
		case VAL_LOAD_ROLE			: RES = CXX_LOAD_ROLE			; break;
		case VAL_SAVE_INVENTORY		: RES = CXX_SAVE_INVENTORY		; break;
		case VAL_SAVE_ROLE			: RES = CXX_SAVE_ROLE			; break;
		case VAL_LOAD_FACTION		: RES = CXX_LOAD_FACTION		; break;
		case VAL_LOAD_DOMAIN		: RES = CXX_LOAD_DOMAIN			; break;
		case VAL_LOAD_DOMAIN2		: RES = CXX_LOAD_DOMAIN2		; break;
		case VAL_GSHOP_ADD_GOLD		: RES = CXX_GSHOP_ADD_GOLD		; break;
		case VAL_MAX_ROLE_MEMBER	: RES = CXX_MAX_ROLE_MEMBER		; break;
		case VAL_GET_FACTION		: RES = CXX_GET_FACTION			; break;
		case VAL_INIT_MYSQL			: RES = CXX_INIT_MYSQL			; break;
		case VAL_LOAD_STATE			: RES = CXX_LOAD_STATE			; break;
		case VAL_LOAD_ELEMENTS_DATA	: RES = CXX_LOAD_ELEMENTS_DATA	; break;
		case VAL_LOAD_TASK_DATA		: RES = CXX_LOAD_TASK_DATA		; break;
		case VAL_LOAD_GSHOP_DATA	: RES = CXX_LOAD_GSHOP_DATA		; break;
		case VAL_GET_ROLE			: RES = CXX_GET_ROLE			; break;
		case VAL_PUT_ROLE			: RES = CXX_PUT_ROLE			; break;
		case VAL_MUTEX_SPINLOK		: RES = CXX_MUTEX_SPINLOK		; break;
		default: return -100004;
	}
	

	pthread_mutex_unlock(&license_mutex);
	VM_END
	return RES;
}

__int128 LicenseInterfaces::Check(__int128 v)
{
	__int128 RES = 0;
	VM_BEGIN
	pthread_mutex_lock(&license_mutex);
	
	v ^= SUCCESS;
	
	switch (v)
	{
		case HHH_MAX_ONLINE 		: RES = ( SUCCESS ^ XOR_MAX_ONLINE 			) * ( LIC->m_MAX_ONLINE 		() ^ SUCCESS ) ; break;
		case HHH_INIT_SERVICE		: RES = ( SUCCESS ^ XOR_INIT_SERVICE		) * ( LIC->m_INIT_SERVICE		() ^ SUCCESS ) ; break;
		case HHH_INVALID_LICENSE	: RES = ( SUCCESS ^ XOR_INVALID_LICENSE		) * ( LIC->m_INVALID_LICENSE	() ^ SUCCESS ) ; break;
		case HHH_GET_CONF_FILE		: RES = ( SUCCESS ^ XOR_GET_CONF_FILE		) * ( LIC->m_GET_CONF_FILE	 	() ^ SUCCESS ) ; break;
		case HHH_XOR_SIZE_MALLOC	: RES = ( SUCCESS ^ XOR_XOR_SIZE_MALLOC		) * ( LIC->m_XOR_SIZE_MALLOC	() ^ SUCCESS ) ; break;
		case HHH_DELETE_FREE		: RES = ( SUCCESS ^ XOR_DELETE_FREE			) * ( LIC->m_DELETE_FREE		() ^ SUCCESS ) ; break;
		case HHH_LUA_INIT			: RES = ( SUCCESS ^ XOR_LUA_INIT			) * ( LIC->m_LUA_INIT			() ^ SUCCESS ) ; break;
		case HHH_FREE_OCTETS		: RES = ( SUCCESS ^ XOR_FREE_OCTETS			) * ( LIC->m_FREE_OCTETS		() ^ SUCCESS ) ; break;
		case HHH_SLEEP_PROCESS		: RES = ( SUCCESS ^ XOR_SLEEP_PROCESS		) * ( LIC->m_SLEEP_PROCESS	 	() ^ SUCCESS ) ; break;
		case HHH_GET_ROLE_LIST		: RES = ( SUCCESS ^ XOR_GET_ROLE_LIST		) * ( LIC->m_GET_ROLE_LIST	 	() ^ SUCCESS ) ; break;
		case HHH_OOG_LIMITS			: RES = ( SUCCESS ^ XOR_OOG_LIMITS			) * ( LIC->m_OOG_LIMITS		 	() ^ SUCCESS ) ; break;
		case HHH_MAX_CONNECT		: RES = ( SUCCESS ^ XOR_MAX_CONNECT			) * ( LIC->m_MAX_CONNECT		() ^ SUCCESS ) ; break;
		case HHH_MAX_GAMEDATASEND	: RES = ( SUCCESS ^ XOR_MAX_GAMEDATASEND	) * ( LIC->m_MAX_GAMEDATASEND	() ^ SUCCESS ) ; break;
		case HHH_MAX_KEEP_ALIVE		: RES = ( SUCCESS ^ XOR_MAX_KEEP_ALIVE		) * ( LIC->m_MAX_KEEP_ALIVE	 	() ^ SUCCESS ) ; break;
		case HHH_LOAD_INVENTORY		: RES = ( SUCCESS ^ XOR_LOAD_INVENTORY		) * ( LIC->m_LOAD_INVENTORY	 	() ^ SUCCESS ) ; break;
		case HHH_LOAD_ROLE			: RES = ( SUCCESS ^ XOR_LOAD_ROLE			) * ( LIC->m_LOAD_ROLE		 	() ^ SUCCESS ) ; break;
		case HHH_SAVE_INVENTORY		: RES = ( SUCCESS ^ XOR_SAVE_INVENTORY		) * ( LIC->m_SAVE_INVENTORY	 	() ^ SUCCESS ) ; break;
		case HHH_SAVE_ROLE			: RES = ( SUCCESS ^ XOR_SAVE_ROLE			) * ( LIC->m_SAVE_ROLE		 	() ^ SUCCESS ) ; break;
		case HHH_LOAD_FACTION		: RES = ( SUCCESS ^ XOR_LOAD_FACTION		) * ( LIC->m_LOAD_FACTION		() ^ SUCCESS ) ; break;
		case HHH_LOAD_DOMAIN		: RES = ( SUCCESS ^ XOR_LOAD_DOMAIN			) * ( LIC->m_LOAD_DOMAIN		() ^ SUCCESS ) ; break;
		case HHH_LOAD_DOMAIN2		: RES = ( SUCCESS ^ XOR_LOAD_DOMAIN2		) * ( LIC->m_LOAD_DOMAIN2		() ^ SUCCESS ) ; break;
		case HHH_GSHOP_ADD_GOLD		: RES = ( SUCCESS ^ XOR_GSHOP_ADD_GOLD		) * ( LIC->m_GSHOP_ADD_GOLD	 	() ^ SUCCESS ) ; break;
		case HHH_MAX_ROLE_MEMBER	: RES = ( SUCCESS ^ XOR_MAX_ROLE_MEMBER		) * ( LIC->m_MAX_ROLE_MEMBER	() ^ SUCCESS ) ; break;
		case HHH_GET_FACTION		: RES = ( SUCCESS ^ XOR_GET_FACTION			) * ( LIC->m_GET_FACTION		() ^ SUCCESS ) ; break;
		case HHH_INIT_MYSQL			: RES = ( SUCCESS ^ XOR_INIT_MYSQL			) * ( LIC->m_INIT_MYSQL		 	() ^ SUCCESS ) ; break;
		case HHH_LOAD_STATE			: RES = ( SUCCESS ^ XOR_LOAD_STATE			) * ( LIC->m_LOAD_STATE		 	() ^ SUCCESS ) ; break;
		case HHH_LOAD_ELEMENTS_DATA	: RES = ( SUCCESS ^ XOR_LOAD_ELEMENTS_DATA	) * ( LIC->m_LOAD_ELEMENTS_DATA	() ^ SUCCESS ) ; break;
		case HHH_LOAD_TASK_DATA		: RES = ( SUCCESS ^ XOR_LOAD_TASK_DATA		) * ( LIC->m_LOAD_TASK_DATA	 	() ^ SUCCESS ) ; break;
		case HHH_LOAD_GSHOP_DATA	: RES = ( SUCCESS ^ XOR_LOAD_GSHOP_DATA		) * ( LIC->m_LOAD_GSHOP_DATA	() ^ SUCCESS ) ; break;
		case HHH_GET_ROLE			: RES = ( SUCCESS ^ XOR_GET_ROLE			) * ( LIC->m_GET_ROLE			() ^ SUCCESS ) ; break;
		case HHH_PUT_ROLE			: RES = ( SUCCESS ^ XOR_PUT_ROLE			) * ( LIC->m_PUT_ROLE			() ^ SUCCESS ) ; break;
		case HHH_MUTEX_SPINLOK		: RES = ( SUCCESS ^ XOR_MUTEX_SPINLOK		) * ( LIC->m_MUTEX_SPINLOK	 	() ^ SUCCESS ) ; break;
		default: return -7777777;
	}
	
	pthread_mutex_unlock(&license_mutex);
	VM_END
	return RES;
}

bool LicenseInterfaces::Init(const char * m_ip , unsigned short m_port , const char * m_login , const char * m_pass, const char * m_service, int & result)
{
	bool res = false;
	VM_BEGIN
	
	pthread_mutex_init(&license_mutex,NULL);
	pthread_mutex_lock(&license_mutex);
	
	srand(time(0));
	
	sigset_t set;
	sigemptyset(&set);
	sigaddset(&set, SIGPIPE);
	
	struct sockaddr_in sin;
	memset( &sin, 0x00, sizeof(sin) );
	sin.sin_family = AF_INET;
	sin.sin_port = htons(m_port);
	
	int n = inet_pton(AF_INET, m_ip, &sin.sin_addr);
	if( n <=0 )
	{
		result = -1;
		res = false;
		return res;
	}
	
	int s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if( s < 0 )
	{
		result = -2;
		res = false;
		return res;
	}	
	
	int c = connect(s, (struct sockaddr *)&sin, sizeof(sin));
	if( c < 0 )
	{
		result = -3;
		res = false;
		return res;
	}
	
	struct timeval timeout;      
	timeout.tv_sec = 15;
	timeout.tv_usec = 0;
	
	if (setsockopt (s, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(timeout)) < 0)
	{
		result = -10;
		res = false;
		return res;
	}
	
	if (setsockopt (s, SOL_SOCKET, SO_SNDTIMEO, (char *)&timeout, sizeof(timeout)) < 0)
	{
		result = -11;
		res = false;
		return res;
	}
	
	LicInfo info;
	
	bool is_send;
	BUFFER Sender;
	Sender.Clear();

	bool is_recv;
	BUFFER Receiver;
	Receiver.Clear();

	bool is_osec;
	RC4 OsecKey;
	OsecKey.Clear();

	bool is_isec;
	RC4 IsecKey;
	IsecKey.Clear();

	bool is_decompress;
	mppc compressor;
	compressor.Init();
	
	XSSCrypt * cc = XSSCrypt::GetInstance();
	
	char recv_buf[MAX_BUFFER];
	memset(recv_buf , 0x00 , sizeof(recv_buf));
	int recv_size = 0;
	
	char send_buf[MAX_BUFFER];
	memset(send_buf , 0x00 , sizeof(send_buf));
	int send_size = 0;
	
	recv_size = recv(s,recv_buf,(sizeof(recv_buf)-1),0);
	if (recv_size < 0)
	{
		result = -4;
		res = false;
		return res;
	}
	
	Receiver.Clear();
	Receiver.Replace(recv_buf, recv_size);
	
	LicenseChallenge lc;
	lc.Init();
	lc.Unmarshal(Receiver);
	
	info.challenge = lc.challenge;
	info.login.Replace(m_login, strlen(m_login));
	info.passwd.Replace(m_pass, strlen(m_pass));
	info.service.Replace(m_service, strlen(m_service));
	info.time_start = time(0);
	
	// challenge 
	unsigned int time_key = info.time_start;
	time_key -= (time_key % 604800);
	cc->Init( time_key );
	
	char buf[1024];			
	size_t len = 0;
	char * data = buf;
	memset(buf, 0x00 , sizeof(buf));
	memcpy(data, &time_key, sizeof(time_key)); data += sizeof(time_key);
	memcpy(data, info.login.Begin(), info.login.Size()); data += info.login.Size();
	memcpy(data, info.passwd.Begin(), info.passwd.Size()); data += info.passwd.Size();
	info.rpc_passwd.Replace(buf,(info.login.Size() + info.passwd.Size() + sizeof(time_key)));

	int sev_rand[] = { rand() , rand() , rand() , rand() };
	info.sev_rand.Replace(sev_rand, sizeof(sev_rand));
	
	char md5_hmac[PASSWD_SIZE];
	hmac_md5(info.challenge.Begin(), info.challenge.Size(), info.rpc_passwd.Begin(), info.rpc_passwd.Size(), md5_hmac);
	info.rpc_passwd.Replace(md5_hmac, sizeof(md5_hmac));
	
	LicenseLogin ll;
	ll.login      = info.login      ;
	ll.service    = info.service    ;
	ll.time_start = info.time_start ;
	ll.rpc_passwd = info.rpc_passwd ;
	ll.sev_rand   = info.sev_rand   ;
	
	cc->Crypt( ll.login , ll.sev_rand );
	
	Sender.Clear();
	ll.Marshal(Sender);
	
	send_size = Sender.GetSize();
	memcpy(send_buf, Sender.GetData(), send_size );
	send(s, send_buf, send_size, 0);
	
	// set iseckey 
	Octets iseckey;
	GenerateKey( info.login, info.rpc_passwd, info.sev_rand, iseckey );
	IsecKey.Clear();
	IsecKey.Init(iseckey.Begin(), iseckey.Size());
	is_isec = true;
	
	// Login_re
	recv_size = recv(s,recv_buf,(sizeof(recv_buf)-1),0);
	if (recv_size < 0)
	{
		result = -5;
		res = false;
		return res;
	}
	
	if (is_isec)
	{
		IsecKey.Encode(recv_buf, recv_size, recv_buf);
	}
	
	Receiver.Clear();
	Receiver.Replace(recv_buf, recv_size);
	
	LicenseLogin_Re ll_Re;
	ll_Re.Init();
	ll_Re.Unmarshal(Receiver);

	if (ll_Re.version != (SERVER_VERSION + API_VERSION))
	{
		result = -12;
		res = false;
		return res;
	}

	info.id = ll_Re.id;
	info.version = ll_Re.version;
	info.ip_last = ll_Re.ip_last;
	info.time_end = ll_Re.time_end;
	info.clt_rand = ll_Re.clt_rand;
	
	// set oseckey 
	Octets oseckey;
	GenerateKey( info.login, info.rpc_passwd, info.clt_rand, oseckey );
	OsecKey.Clear();
	OsecKey.Init(oseckey.Begin(), oseckey.Size());
	is_osec = true;
	
	
	// licdata
	Octets clientdata;
	GetClientInfo(clientdata);
	
	int datakey[] = { info.id , info.version , (int)info.ip_last , (int)info.time_end };
	info.datakey.Replace( datakey, sizeof(datakey) );
	
	LicenseData ld;
	ld.id      	  = info.id      	;
	ld.datakey    = info.datakey    ;
	ld.data		  = clientdata		;
	
	cc->Crypt( ld.data, ld.datakey );
	
	Sender.Clear();
	ld.Marshal(Sender);
	
	send_size = Sender.GetSize();
	memcpy(send_buf, Sender.GetData(), send_size );
	
	if (is_osec)
	{
		OsecKey.Encode(send_buf, send_size, send_buf);
	}

	send(s, send_buf, send_size, 0);
	
	// licdata_re
	recv_size = recv(s,recv_buf,(sizeof(recv_buf)-1),0);
	if (recv_size < 0)
	{
		result = -6;
		res = false;
		return res;
	}
	
	if (is_isec)
	{
		IsecKey.Encode(recv_buf, recv_size, recv_buf);
	}
	
	Receiver.Clear();
	Receiver.Replace(recv_buf, recv_size);
	
	LicenseData_Re ld_Re;
	ld_Re.Init();
	ld_Re.Unmarshal(Receiver);
	
	if ( info.id != ld_Re.id || ld_Re.datakey.Size() != 16 || ld_Re.data.Size() != sizeof(LicenseDataBase) )
	{
		res = false;
		return res;
	}
	
	cc->Uncrypt( ld_Re.data, ld_Re.datakey );
	int * dbkey = (int*)ld_Re.datakey.Begin();
	
	if ( info.id != dbkey[0] || dbkey[1] != info.version || dbkey[2] != info.ip_last || dbkey[3] != info.time_end)
	{
		result = -7;
		res = false;
		return res;
	}
	
	// license success
	
	int sussecc = (info.ip_last * time_key * info.version);
	LicenseQuit lq;
	lq.Init();
	
	lq.id = info.id;
	lq.success = sussecc;
	
	Sender.Clear();
	lq.Marshal(Sender);
	
	send_size = Sender.GetSize();
	memcpy(send_buf, Sender.GetData(), send_size );
	
	if (is_osec)
	{
		OsecKey.Encode(send_buf, send_size, send_buf);
	}

	send(s, send_buf, send_size, 0);
	
	// license success re
	recv_size = recv(s,recv_buf,(sizeof(recv_buf)-1),0);
	if (recv_size < 0)
	{
		result = -8;
		res = false;
		return res;
	}
	
	if (is_isec)
	{
		IsecKey.Encode(recv_buf, recv_size, recv_buf);
	}
	
	Receiver.Clear();
	Receiver.Replace(recv_buf, recv_size);
	
	LicenseQuit lq_Re;
	lq_Re.Init();
	lq_Re.Unmarshal(Receiver);
	
	if ( lq_Re.success != sussecc )
	{
		//printf("SUX: %d %d \n", lq_Re.success , sussecc );
		result = -9;
		res = false;
		return res;
	}
	
	// create license data
	SUCCESS = sussecc;
	LIC = new LicenseDataBase();
	memcpy( LIC , ld_Re.data.Begin() , ld_Re.data.Size() );
	LIC->set_key( info.id, time_key, info.time_end, info.ip_last );
	
	pthread_mutex_unlock(&license_mutex);
	
	if ( !LIC_INVALID_LICENSE )
	{
		result = -10;
		res = false;
		return res;
	}

	result = 0;
	res = true;
	QCQ7ioU7Kk = true;
	VM_END
	return res;
}

bool LicenseInterfaces::Complete()
{
	return QCQ7ioU7Kk;
}

/******************************************************************************
 * STEALTH_AUX_FUNCTION
 *  "Fake" function that is referenced from the Stealth Area
 *  This function is defined as macro inside "StealthCodeArea.h"
 *****************************************************************************/

STEALTH_AUX_FUNCTION

/******************************************************************************
 * MyFunctionStealthCodeArea
 *  Defines the Stealth Area. Note that this function should never be executed.
 *****************************************************************************/

#pragma optimize( "", off )

__attribute__(( section(".cv_st")))
void MyFunctionStealthCodeArea(void)
{
    STEALTH_AREA_START

    // Here we create our Stealth area. Insert more entries if you
    // require more space for the protection code

    STEALTH_AREA_CHUNK

    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK
    STEALTH_AREA_CHUNK

    STEALTH_AREA_CHUNK

    STEALTH_AREA_END
}

#pragma optimize( "", on )

/******************************************************************************
 * end
 *****************************************************************************/

