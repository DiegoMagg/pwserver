#include <cstring>
#include <iostream>
#include "macro.h"
#include "buffer.h"

//=========================
//=========OCTETS==========
//=========================

Octets::Octets()
{
	data = NULL; 
	end = NULL; 
	size.value = 0;
}

Octets::~Octets()
{
	if (data && size.value)
	{
		free(data);
		data = NULL;
		size = 0;
	}
}

void Octets::Clear()
{
	if (data)
	{
		free(data);
		data = NULL;
		end = NULL;
		size.value = 0;
	}
}

void Octets::Resize(unsigned int n)
{
	if (n && n < MAX_BUFFER)
	{
		Clear();
		data = malloc(n);
		if (data)
		{
			size.value = n;
			end = (char*)((size_t)data + n);
			memset(data, 0x00, n);
		}
	}
}

void Octets::Replace(void* buf, unsigned int n)
{
	if (buf && n && n < MAX_BUFFER)
	{
		Clear();
		data = malloc(n);
		if (data)
		{
			size.value = n;
			end = (char*)((size_t)data + n);
			memset(data, 0x00, n);
			memcpy(data, buf, n);
		}
	}
}

void Octets::Replace(const void* buf, unsigned int n)
{
	if (buf && n && n < MAX_BUFFER)
	{
		Clear();
		data = malloc(n);
		if (data)
		{
			size.value = n;
			end = (char*)((size_t)data + n);
			memset(data, 0x00, n);
			memcpy(data, buf, n);
		}
	}
}

void Octets::Replace(const char* buf)
{
	unsigned int n = (strlen(buf) + 1);
	if (buf && n && n < MAX_BUFFER)
	{
		Clear();
		data = malloc(n);
		if (data)
		{
			size.value = n;
			end = (char*)((size_t)data + n);
			memset(data, 0x00, n);
			memcpy(data, buf, n);
		}
	}
}

void Octets::Replace(Octets& o)
{
	if (o.Begin() && o.Size() < MAX_BUFFER)
	{
		Replace(o.Begin(), o.Size());
	}
}

void Octets::Add(void* buf, unsigned int n)
{
	unsigned int iSize = n + size.value;
	if (buf && n && iSize < MAX_BUFFER)
	{
		char* iBuff = (char*)malloc(iSize);
		if (iBuff)
		{
			memset(iBuff, 0x00, iSize);
			memcpy(iBuff, data, size.value);
			memcpy(&iBuff[size.value], buf, n);
			Replace(iBuff, iSize);
			free(iBuff);
		}
	}
}

void Octets::Add(const void* buf, unsigned int n)
{
	unsigned int iSize = n + size.value;
	if (buf && n && iSize < MAX_BUFFER)
	{
		char* iBuff = (char*)malloc(iSize);
		if (iBuff)
		{
			memset(iBuff, 0x00, iSize);
			memcpy(iBuff, data, size.value);
			memcpy(&iBuff[size.value], buf, n);
			Replace(iBuff, iSize);
			free(iBuff);
		}
	}
}

void Octets::Add(Octets& o)
{
	if (o.Begin() && o.Size() && (o.size.value + size.value) < MAX_BUFFER)
	{
		Add(o.Begin(), o.Size());
	}
}


//=========================
//=========BUFFER==========
//=========================

BUFFER::BUFFER()
{
	active = false;
	count = 0;
	pos = 0;
	memset(data, 0x00, sizeof(data));
}

BUFFER::~BUFFER()
{
	active = false;
	count = 0;
	pos = 0;
	memset(data, 0x00, sizeof(data));
}

BUFFER& BUFFER::Clear()
{
	active = false;
	count = 0;
	pos = 0;
	memset(data, 0x00, sizeof(data));
	return *this;
}

BUFFER& BUFFER::Resize(unsigned int & n)
{
	if (n && n < MAX_BUFFER)
	{
		count = n;
		memset(data, 0x00, sizeof(data));
	}
	return *this;
}

BUFFER& BUFFER::Replace(void* buf, size_t n)
{
	if (buf && n && n < MAX_BUFFER)
	{
		count = 0;
		memset(data, 0x00, sizeof(data));

		pos = 0;
		count = n;
		memcpy(data, buf, n);
	}
	return *this;
}

BUFFER& BUFFER::Push(void* buf, size_t n)
{
	if (buf && n && (n + count) < MAX_BUFFER)
	{
		pos = 0;
		switch (n)
		{
		case 1: setup_char(&data[count], get_char(buf, 0)); count += n; break;
		case 2: setup_short(&data[count], get_short(buf, 0)); count += n; break;
		case 4: setup_int(&data[count], get_int(buf, 0)); count += n; break;
		case 8: setup_long(&data[count], get_long(buf, 0)); count += n; break;
		default: setup_copymem(&data[count], buf, n); count += n; break;
		}
	}
	return *this;
}

BUFFER& BUFFER::Pop(void* buf, size_t n)
{
	if (buf && n && (n + pos) <= count && (n + pos) < MAX_BUFFER)
	{
		switch (n)
		{
		case 1: setup_char(buf, get_char(data, pos)); pos += n; break;
		case 2: setup_short(buf, get_short(data, pos)); pos += n; break;
		case 4: setup_int(buf, get_int(data, pos)); pos += n; break;
		case 8: setup_long(buf, get_long(data, pos)); pos += n; break;
		default: setup_copymem(buf, &data[pos], n); pos += n; break;
		}
	}
	return *this;
}

BUFFER& BUFFER::PushQuint(QUInt & v)
{
	unsigned int qvu = v.value;
	if (qvu < 0x80)
	{
		unsigned char qv = qvu;
		Push(&qv, sizeof(qv));
	}
	else if (qvu < 0x4000)
	{
		unsigned short qv = BSWAP_16((qvu | 0x8000));
		Push(&qv, sizeof(qv));
	}
	else if (qvu < 0x20000000)
	{
		unsigned int qv = BSWAP_32((qvu | 0xc0000000));
		Push(&qv, sizeof(qv));
	}
	else
	{
		unsigned char eqv = 0xE0;
		Push(&eqv, sizeof(eqv));
		unsigned int qv = BSWAP_32(qvu);
		Push(&qv, sizeof(qv));
	}
	return *this;
}

BUFFER& BUFFER::PopQuint(QUInt& v)
{
	if (data && pos < count && pos < MAX_BUFFER)
	{
		v.value = 0;

		unsigned char qvE0 = 0;
		unsigned int qv32 = 0;
		unsigned short qv16 = 0;
		unsigned char qv8 = 0;

		switch (get_char(data, pos) & 0xe0)
		{
		case 0xe0:
			Pop(&qvE0, sizeof(qvE0));
			Pop(&qv32, sizeof(qv32));
			v.value = BSWAP_32(qv32);
			break;
		case 0xc0:
			Pop(&qv32, sizeof(qv32));
			v.value = BSWAP_32(qv32); 
			v.value = v.value &~ 0xc0000000;
			break;
		case 0xa0:
		case 0x80:
			Pop(&qv16, sizeof(qv16));
			v.value = (unsigned short)BSWAP_16(qv16); 
			v.value = (unsigned short)v.value &~ 0x8000;
			break;
		default:
			Pop(&qv8, sizeof(qv8));
			v.value = (unsigned char)qv8;
			break;
		}
	}
	return *this;
}

BUFFER& BUFFER::PushOctet(Octets & o)
{
	QUInt iSize = o.Size();
	PushQuint(iSize);
	Push(o.Begin(), o.Size());
	return *this;
}

BUFFER& BUFFER::PopOctet(Octets & o)
{
	QUInt iSize = 0;
	char iData[MAX_BUFFER];
	PopQuint(iSize);
	Pop(iData, iSize.value);
	o.Replace(iData, iSize.value);
	return *this;
}

BUFFER& BUFFER::PushInt(unsigned int & v)
{
	unsigned int qw = BSWAP_32(v);
	Push(&qw, sizeof(qw));
	return *this;
}
BUFFER& BUFFER::PopInt(unsigned int& v)
{
	unsigned int qw = 0;
	Pop(&qw, sizeof(qw));
	v = BSWAP_32(qw);
	return *this;
}

BUFFER& BUFFER::PushShort(unsigned short & v)
{
	unsigned short qw = BSWAP_16(v);
	Push(&qw, sizeof(qw));
	return *this;
}

BUFFER& BUFFER::PopShort(unsigned short& v)
{
	unsigned short qw = 0;
	Pop(&qw, sizeof(qw));
	v = BSWAP_16(qw);
	return *this;
}

BUFFER& BUFFER::PushChar(unsigned char& v)
{
	unsigned char qw = v;
	Push(&qw, sizeof(qw));
	return *this;
}

BUFFER& BUFFER::PopChar(unsigned char& v)
{
	unsigned char qw = 0;
	Pop(&qw, sizeof(qw));
	v = qw;
	return *this;
}

BUFFER& BUFFER::PushInt(int& v)
{
	unsigned int qw = BSWAP_32(v);
	Push(&qw, sizeof(qw));
	return *this;
}
BUFFER& BUFFER::PopInt(int& v)
{
	unsigned int qw = 0;
	Pop(&qw, sizeof(qw));
	v = BSWAP_32(qw);
	return *this;
}

BUFFER& BUFFER::PushShort(short& v)
{
	unsigned short qw = BSWAP_16(v);
	Push(&qw, sizeof(qw));
	return *this;
}

BUFFER& BUFFER::PopShort(short& v)
{
	unsigned short qw = 0;
	Pop(&qw, sizeof(qw));
	v = BSWAP_16(qw);
	return *this;
}

BUFFER& BUFFER::PushChar(char& v)
{
	unsigned char qw = v;
	Push(&qw, sizeof(qw));
	return *this;
}

BUFFER& BUFFER::PopChar(char& v)
{
	unsigned char qw = 0;
	Pop(&qw, sizeof(qw));
	v = qw;
	return *this;
}

BUFFER& BUFFER::PushFloat(float& v)
{
	unsigned int qw = BSWAP_32(*(unsigned int*)&v);
	Push(&qw, sizeof(qw));
	return *this;
}
BUFFER& BUFFER::PopFloat(float& v)
{
	unsigned int qw = 0;
	Pop(&qw, sizeof(qw));
	qw = BSWAP_32(qw);
	v = *(float*)&qw;
	return *this;
}

BUFFER& BUFFER::PushDouble(double& v)
{
	unsigned long long qw = BSWAP_64(*(unsigned long long*)&v);
	Push(&qw, sizeof(qw));
	return *this;
}
BUFFER& BUFFER::PopDouble(double& v)
{
	unsigned long long qw = 0;
	Pop(&qw, sizeof(qw));
	qw = BSWAP_64(qw);
	v = *(double*)&qw;
	return *this;
}

BUFFER& BUFFER::PushLong(unsigned long long& v)
{
	unsigned long long qw = BSWAP_64(v);
	Push(&qw, sizeof(qw));
	return *this;
}
BUFFER& BUFFER::PopLong(unsigned long long& v)
{
	unsigned long long qw = 0;
	Pop(&qw, sizeof(qw));
	v = BSWAP_64(qw);
	return *this;
}

BUFFER& BUFFER::PushLong(long long& v)
{
	unsigned long long qw = BSWAP_64(v);
	Push(&qw, sizeof(qw));
	return *this;
}
BUFFER& BUFFER::PopLong(long long& v)
{
	unsigned long long qw = 0;
	Pop(&qw, sizeof(qw));
	v = BSWAP_64(qw);
	return *this;
}

