#include <iostream>
#include <cstring>
#include "macro.h"
#include "base64.h"

//---------------------------------------------------------------------------
static const char * base64ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
//---------------------------------------------------------------------------
char GetABCRand() 
{ 
	return base64ABC[(SevRand % sizeof(base64ABC))]; 
}
//---------------------------------------------------------------------------
template <class T>
int base64_Pos(T _c)
{
	for (int i = 0; i < 64; i++)
	{
		if (_c == base64ABC[i])
			return i;
	}
	return -1;
}
//---------------------------------------------------------------------------
char* Base64Decode(char* str)
{
	if (!str)return 0;
	int len = strlen(str);
	char* dest = (char*)malloc(sizeof(char) * (len * 4) + 1);
	if (!dest)return 0;
	memset(dest, 0, sizeof(char) * (len * 4) + 1);
	int count = 0, rSize = 0, p;
	long L = 0;
	for (int i = 0; i < len; i++)
	{
		char c = str[i];
		if (c == '=')break;
		p = base64_Pos(c);
		if (p < 0)continue;
		count++;
		L = (L << 6) | p;
		if (count == 4)
		{
			dest[rSize++] = ((L >> 16) & 0xff);
			dest[rSize++] = ((L >> 8) & 0xff);
			dest[rSize++] = (L & 0xff);
			count = 0;
		}
	}
	if (count == 1)dest[rSize++] = ((L) & 0xff);
	if (count == 2)dest[rSize++] = ((L >> 4) & 0xff);
	if (count == 3)
	{
		dest[rSize++] = ((L >> 10) & 0xff);
		dest[rSize++] = ((L >> 2) & 0xff);
	}
	return dest;
}
//---------------------------------------------------------------------------


