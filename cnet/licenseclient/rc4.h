//---------------------------------------------------------------------------
//-- RC4 Cryptografy (c) deadraky
//---------------------------------------------------------------------------

#ifndef __RC4_H
#define __RC4_H

class RC4
{
private:

	unsigned char RC4_S[256];
	int RC4_i;
	int RC4_j;

	void RC4_InitKey(unsigned char* Key, int KeyLength)
	{
		RC4_i = 0;
		RC4_j = 0;

		for (int i = 0; i < 256; i++)
		{
			RC4_S[i] = i;
		}

		int j = 0;

		for (int i = 0; i < 256; i++)
		{
			j = (j + Key[i % KeyLength] + RC4_S[i]) % 256;
			unsigned char temp = RC4_S[i];
			RC4_S[i] = RC4_S[j];
			RC4_S[j] = temp;
		}
	}

	unsigned char RC4_Transform(unsigned char nextByte)
	{
		RC4_i = (RC4_i + 1) % 256;
		RC4_j = (RC4_j + RC4_S[RC4_i]) % 256;

		unsigned char temp = RC4_S[RC4_i];
		RC4_S[RC4_i] = RC4_S[RC4_j];
		RC4_S[RC4_j] = temp;
		temp = (RC4_S[RC4_i] + RC4_S[RC4_j]) % 256;
		return nextByte ^ RC4_S[temp];
	}

public:

	void Init(void * inBuf, unsigned int inLength)
	{
		RC4_InitKey((unsigned char* )inBuf, inLength);
		return;
	}

	void Encode(char* inBuf, unsigned int inLength, char* outBuf)
	{
		if (inLength == 0) return;
		int i;
		for (i = 0; i < inLength; i++)
			outBuf[i] = RC4_Transform(inBuf[i]);       
		return;
	}

	void Clear()
	{
		int RC4_i = 0;
		int RC4_j = 0;
		memset(RC4_S, 0x00, sizeof(RC4_S));
	}
	
};
 
#endif

