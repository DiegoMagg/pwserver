//----------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------DEADRAKY (C) 2022----------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------
#ifndef __PWBUFFER_H
#define __PWBUFFER_H

#include <vector>

enum : size_t
{
	MAX_BUFFER = 16384u,
};

struct QUInt
{
	unsigned int value;
	QUInt() { value = 0; }
	QUInt(unsigned int v) { value = v; }
	~QUInt() { value = 0; }

	QUInt & operator = (unsigned int v) { value = v; return *this; }
};

class Octets
{
private:
	enum : size_t
	{
		MALLOC_FLAG = 0x100u,
	};
private:
	void* data;
	void* end;
	QUInt size;
public:
	Octets();
	~Octets();

	inline void* Begin() { return data; }
	inline void* End() { return end; }
	inline unsigned int Size() { return size.value; }

	void Clear();
	void Resize(unsigned int n);

	void Replace(void* buf, unsigned int n);
	void Replace(const void* buf, unsigned int n);
	void Replace(const char*);
	void Replace(Octets & );

	void Add(void* buf, unsigned int n);
	void Add(const void* buf, unsigned int n);
	void Add(Octets&);

	Octets& operator = (Octets& x) { Replace(x); return *this; }
	Octets& operator += (Octets& x) { Add(x); return *this; }
	
};

class BUFFER
{
private:
	size_t count;
	size_t pos;
	char data[MAX_BUFFER];
	bool active;
public:
	BUFFER();
	~BUFFER();

	BUFFER & Clear();
	BUFFER & Replace(void* buf, size_t n);
	BUFFER & Resize(unsigned int& n);
	BUFFER & Push(void* buf, size_t n);
	BUFFER & Pop(void* buf, size_t n);

	BUFFER & PushQuint(QUInt& v);
	BUFFER & PopQuint(QUInt& v);

	BUFFER & PushOctet(Octets& o);
	BUFFER & PopOctet(Octets& o);

	BUFFER& PushLong(long long& v);
	BUFFER& PopLong(long long& v);

	BUFFER & PushInt(int& v);
	BUFFER & PopInt(int& v);

	BUFFER & PushShort(short& v);
	BUFFER & PopShort(short& v);

	BUFFER & PushChar(char& v);
	BUFFER & PopChar(char& v);

	BUFFER& PushLong(unsigned long long& v);
	BUFFER& PopLong(unsigned long long& v);

	BUFFER & PushInt(unsigned int& v);
	BUFFER & PopInt(unsigned int& v);

	BUFFER & PushShort(unsigned short& v);
	BUFFER & PopShort(unsigned short& v);

	BUFFER & PushChar(unsigned char& v);
	BUFFER & PopChar(unsigned char& v);

	BUFFER& PushFloat(float& v);
	BUFFER& PopFloat(float& v);

	BUFFER& PushDouble(double& v);
	BUFFER& PopDouble(double& v);

	//-------------------------------------------------------------------

	BUFFER& operator << (char & x) { return PushChar(x); }
	BUFFER& operator << (unsigned char & x) { return PushChar(x); }
	BUFFER& operator << (short & x) { return PushShort(x); }
	BUFFER& operator << (unsigned short & x) { return PushShort(x); }
	BUFFER& operator << (int & x) { return PushInt(x); }
	BUFFER& operator << (unsigned int & x) { return PushInt(x); }
	BUFFER& operator << (long long & x) { return PushLong(x); }
	BUFFER& operator << (unsigned long long x) { return PushLong(x); }
	BUFFER& operator << (float & x) { return PushFloat(x); }
	BUFFER& operator << (double & x) { return PushDouble(x); }
	BUFFER& operator << (Octets & x) { return PushOctet(x); }
	BUFFER& operator << (QUInt & x) { return PushQuint(x); }
	
	//-------------------------------------------------------------------

	BUFFER& operator >> (char & x) { return PopChar(x); }
	BUFFER& operator >> (unsigned char & x) { return PopChar(x); }
	BUFFER& operator >> (short & x) { return PopShort(x); }
	BUFFER& operator >> (unsigned short & x) { return PopShort(x); }
	BUFFER& operator >> (int & x) { return PopInt(x); }
	BUFFER& operator >> (unsigned int & x) { return PopInt(x); }
	BUFFER& operator >> (long long & x) { return PopLong(x); }
	BUFFER& operator >> (unsigned long long & x) { return PopLong(x); }
	BUFFER& operator >> (float & x) { return PopFloat(x); }
	BUFFER& operator >> (double & x) { return PopDouble(x); }
	BUFFER& operator >> (Octets & x) { return PopOctet(x); }
	BUFFER& operator >> (QUInt& x) { return PopQuint(x); }


	inline bool GetActive() { return active; }
	inline void SetActive(bool v) { active = v; }
	inline void SetPos(size_t n) { pos = n; }
	inline char* GetData() { return data; }
	inline size_t GetSize() { return count; }
};

#endif