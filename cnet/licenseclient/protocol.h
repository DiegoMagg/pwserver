//----------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------DEADRAKY (C) 2022----------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------
#ifndef __PWPROTOCOL_H
#define __PWPROTOCOL_H

#include "buffer.h"
//========================================
//==============ProcName==================
//========================================

enum : size_t
{
	LICENSECHALLENGE	= 13000,
	LICENSELOGIN		= 13001,
	LICENSELOGIN_RE		= 13002,
	LICENSEDATA			= 13003,
	LICENSEDATA_RE		= 13004,
	LICENSEQUIT			= 13012,
};


//========================================
//===============RPCData==================
//========================================

struct IntVector
{
	enum : size_t
	{
		MAX_SIZE = 512,
	};

	QUInt count;
	int* item;

	IntVector();
	~IntVector();

	void Marshal(BUFFER&);
	void Unmarshal(BUFFER&);

	void Reserve(size_t iSize);
	void Clear();

	inline unsigned int GetSize() { return count.value; }
	inline int GetData(size_t i) { return i < count.value ? item[i] : 0; }
};

struct LicInfo
{
	unsigned int ip_new;
	Octets challenge;
	unsigned int time_start;
	Octets service;
	Octets login;
	Octets passwd;
	Octets rpc_passwd;
	Octets sev_rand;
	int id;
	int version;
	unsigned int ip_last;
	unsigned int time_end;
	Octets clt_rand;
	unsigned int time_live;
	Octets iseckey;
	Octets oseckey;
	Octets datakey;
	unsigned int success;

	LicInfo();
	~LicInfo();
	void Marshal(BUFFER&);
	void Unmarshal(BUFFER&);
	
};

//========================================
//==============Protocol==================
//========================================

class Protocol
{
public:
	QUInt type;
	QUInt size;
public:
	Protocol();
	~Protocol();
	virtual void Marshal(BUFFER &);
	virtual void Unmarshal(BUFFER &);
	virtual void Process();
	virtual void Destroy();

	inline unsigned int GetType() { return type.value; }
	inline unsigned int GetSize() { return size.value; }

	void Init();
	static Protocol* ProtocolCreate(BUFFER & b);
};

//-------------------------------------

class LicenseChallenge : public Protocol
{
public:
	Octets challenge;
public:
	LicenseChallenge();
	~LicenseChallenge();
	void Marshal(BUFFER&);
	void Unmarshal(BUFFER&);
	void Process();
};

//-------------------------------------

class LicenseLogin : public Protocol
{
public:
	Octets login;
	Octets service;
	unsigned int time_start;
	Octets rpc_passwd;
	Octets sev_rand;
public:
	LicenseLogin();
	~LicenseLogin();
	void Marshal(BUFFER&);
	void Unmarshal(BUFFER&);
	void Process();
};

//-------------------------------------

class LicenseLogin_Re : public Protocol
{
public:
	int id;
	int version;
	unsigned int ip_last;
	int time_end;
	Octets clt_rand;
public:
	LicenseLogin_Re();
	~LicenseLogin_Re();
	void Marshal(BUFFER&);
	void Unmarshal(BUFFER&);
	void Process();
};

//-------------------------------------

class LicenseData : public Protocol
{
public:
	int id;
	Octets datakey;
	Octets data;
public:
	LicenseData();
	~LicenseData();
	void Marshal(BUFFER&);
	void Unmarshal(BUFFER&);
	void Process();
};

//-------------------------------------

class LicenseData_Re : public Protocol
{
public:
	int id;
	Octets datakey;
	Octets data;
public:
	LicenseData_Re();
	~LicenseData_Re();
	void Marshal(BUFFER&);
	void Unmarshal(BUFFER&);
	void Process();
};

//-------------------------------------

class LicenseQuit : public Protocol
{
public:
	int id;
	unsigned int success;
public:
	LicenseQuit();
	~LicenseQuit();
	void Marshal(BUFFER&);
	void Unmarshal(BUFFER&);
	void Process();
};

//-------------------------------------

#endif