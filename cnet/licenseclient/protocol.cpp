#include <iostream>
#include "buffer.h"
#include "protocol.h"

//========================================
//===============RPCData==================
//========================================

//----------------------------------------

IntVector::IntVector()
{
	count = 0;
	item = NULL;
}

IntVector::~IntVector()
{
	count.value = 0;
	delete[] item;
}

void IntVector::Unmarshal(BUFFER& b)
{
	b >> count;
	if (count.value && count.value < MAX_SIZE)
	{
		item = new int[count.value];
		for (size_t i = 0; i < count.value; i++)
		{
			b >> item[i];
		}
	}
}

void IntVector::Marshal(BUFFER& b)
{
	b << count;
	for (size_t i = 0; i < count.value; i++)
	{
		b << item[i];
	}
}

void IntVector::Reserve(size_t iSize)
{
	if (iSize && iSize < MAX_SIZE)
	{
		Clear();
		count.value = iSize;
		item = new int[iSize];
	}
}

void IntVector::Clear()
{
	if (item && count.value)
	{
		delete[] item;
		count.value = 0;
	}
}

//----------------------------------------

LicInfo::LicInfo()
{
	ip_new = 0;
	challenge.Clear();
	time_start = 0;
	service.Clear();
	login.Clear();
	passwd.Clear();
	rpc_passwd.Clear();
	sev_rand.Clear();
	id = 0;
	version = 0;
	ip_last = 0;
	time_end = 0;
	clt_rand.Clear();
	time_live = 0;
	iseckey.Clear();
	oseckey.Clear();
	datakey.Clear();
	success = 0;
}

LicInfo::~LicInfo()
{
	ip_new = 0;
	challenge.Clear();
	time_start = 0;
	service.Clear();
	login.Clear();
	passwd.Clear();
	rpc_passwd.Clear();
	sev_rand.Clear();
	id = 0;
	version = 0;
	ip_last = 0;
	time_end = 0;
	clt_rand.Clear();
	time_live = 0;
	iseckey.Clear();
	oseckey.Clear();
	datakey.Clear();
	success = 0;
}

void LicInfo::Unmarshal(BUFFER& b)
{
	b >> ip_new;
	b >> challenge;
	b >> time_start;
	b >> service;
	b >> login;
	b >> passwd;
	b >> rpc_passwd;
	b >> sev_rand;
	b >> id;
	b >> version;
	b >> ip_last;
	b >> time_end;
	b >> clt_rand;
	b >> time_live;
	b >> iseckey;
	b >> oseckey;
	b >> datakey;
	b >> success;
}

void LicInfo::Marshal(BUFFER& b)
{
	b << ip_new;
	b << challenge;
	b << time_start;
	b << service;
	b << login;
	b << passwd;
	b << rpc_passwd;
	b << sev_rand;
	b << id;
	b << version;
	b << ip_last;
	b << time_end;
	b << clt_rand;
	b << time_live;
	b << iseckey;
	b << oseckey;
	b << datakey;
	b << success;
}

//========================================
//==============Protocol==================
//========================================

Protocol* Protocol::ProtocolCreate(BUFFER & b)
{
	QUInt PType = 0;
	Protocol* Proto = NULL;

	b >> PType;
	b.SetPos(0);

	//printf("RECV::Protocol: type=%d , size=%d \n", ProtocolType, ProtocolSize);

	switch (PType.value)
	{
	case LICENSECHALLENGE:
		Proto = new LicenseChallenge();
		break;
	case LICENSELOGIN:
		Proto = new LicenseLogin();
		break;
	case LICENSELOGIN_RE:
		Proto = new LicenseLogin_Re();
		break;
	case LICENSEDATA:
		Proto = new LicenseData();
		break;
	case LICENSEDATA_RE:
		Proto = new LicenseData_Re();
		break;
	case LICENSEQUIT:
		Proto = new LicenseQuit();
		break;

	default:
		Proto = new Protocol();
		break;
	}

	return Proto;
}

//---------------------------------------------------------------------------------

Protocol::Protocol()
{
	type = 0;
	size = 0;
}

Protocol::~Protocol()
{

}

void Protocol::Init()
{

}

void Protocol::Destroy()
{
	delete this;
}

void Protocol::Unmarshal(BUFFER& b)
{
	b >> type;
	b >> size;
}

void Protocol::Marshal(BUFFER& b)
{
	Octets os;
	os.Replace(b.GetData(), b.GetSize());
	b.Clear();
	b << type;
	b << os;
	os.Clear();
}

void Protocol::Process()
{
	//printf("Protocol::Process: type = %d , size = %d \n", type, size);
}

//---------------------------------------------------------------------------------

LicenseChallenge::LicenseChallenge()
{
	type = LICENSECHALLENGE;
	size = 0;
	challenge.Clear();
}

LicenseChallenge::~LicenseChallenge()
{
	challenge.Clear();
}

void LicenseChallenge::Unmarshal(BUFFER& b)
{
	Protocol::Unmarshal(b);
	b >> challenge;
}

void LicenseChallenge::Marshal(BUFFER& b)
{
	b << challenge;
	Protocol::Marshal(b);
}

void LicenseChallenge::Process()
{
	
}

//---------------------------------------------------------------------------------

LicenseLogin::LicenseLogin()
{
	type = LICENSELOGIN;
	size = 0;
	login.Clear();
	service.Clear();
	time_start = 0;
	rpc_passwd.Clear();
	sev_rand.Clear();
}

LicenseLogin::~LicenseLogin()
{
	login.Clear();
	service.Clear();
	rpc_passwd.Clear();
	sev_rand.Clear();
}

void LicenseLogin::Unmarshal(BUFFER& b)
{
	Protocol::Unmarshal(b);
	b >> login;
	b >> service;
	b >> time_start;
	b >> rpc_passwd;
	b >> sev_rand;
}

void LicenseLogin::Marshal(BUFFER& b)
{
	b << login;
	b << service;
	b << time_start;
	b << rpc_passwd;
	b << sev_rand;
	Protocol::Marshal(b);
}

void LicenseLogin::Process()
{
	
}

//---------------------------------------------------------------------------------

LicenseLogin_Re::LicenseLogin_Re()
{
	type = LICENSELOGIN_RE;
	size = 0;
	id = 0;
	version = 0;
	ip_last = 0;
	time_end = 0;
	clt_rand.Clear();
}

LicenseLogin_Re::~LicenseLogin_Re()
{
	clt_rand.Clear();
}

void LicenseLogin_Re::Unmarshal(BUFFER& b)
{
	Protocol::Unmarshal(b);
	b >> id;
	b >> version;
	b >> ip_last;
	b >> time_end;
	b >> clt_rand;
}

void LicenseLogin_Re::Marshal(BUFFER& b)
{
	b << id;
	b << version;
	b << ip_last;
	b << time_end;
	b << clt_rand;
	Protocol::Marshal(b);
}

void LicenseLogin_Re::Process()
{
	
}

//---------------------------------------------------------------------------------

LicenseData::LicenseData()
{
	type = LICENSEDATA;
	size = 0;
	id = 0;
	datakey.Clear();
	data.Clear();
}

LicenseData::~LicenseData()
{
	datakey.Clear();
	data.Clear();
}

void LicenseData::Unmarshal(BUFFER& b)
{
	Protocol::Unmarshal(b);
	b >> id;
	b >> datakey;
	b >> data;
}

void LicenseData::Marshal(BUFFER& b)
{
	b << id;
	b << datakey;
	b << data;
	Protocol::Marshal(b);
}

void LicenseData::Process()
{
	
}

//---------------------------------------------------------------------------------

LicenseData_Re::LicenseData_Re()
{
	type = LICENSEDATA_RE;
	size = 0;
	id = 0;
	datakey.Clear();
	data.Clear();
}

LicenseData_Re::~LicenseData_Re()
{
	datakey.Clear();
	data.Clear();
}

void LicenseData_Re::Unmarshal(BUFFER& b)
{
	Protocol::Unmarshal(b);
	b >> id;
	b >> datakey;
	b >> data;
}

void LicenseData_Re::Marshal(BUFFER& b)
{
	b << id;
	b << datakey;
	b << data;
	Protocol::Marshal(b);
}

void LicenseData_Re::Process()
{
	
}

//---------------------------------------------------------------------------------

LicenseQuit::LicenseQuit()
{
	type = LICENSEQUIT;
	size = 0;
	id = 0;
	success = 0;
}

LicenseQuit::~LicenseQuit()
{

}

void LicenseQuit::Unmarshal(BUFFER& b)
{
	Protocol::Unmarshal(b);
	b >> id;
	b >> success;
}

void LicenseQuit::Marshal(BUFFER& b)
{
	b << id;
	b << success;
	Protocol::Marshal(b);
}

void LicenseQuit::Process()
{
	
}

