
#ifndef __MPPC_H
#define __MPPC_H

#include "macro.h"

enum : size_t
{
    MAX_BUFFER_MPPC = 65535u,
};

//---------------------------------------------------------------------------
void lamecopy(unsigned char* dst, unsigned char* src, unsigned int len)
{
    if ((dst - src) > 3)
        while (len > 3)
        {
            *(int*)dst = *(int*)src;
            dst += 4;
            src += 4;
            len -= 4;
        }
    while (len-- > 0)
        *dst++ = *src++;
}

//---------------------------------------------------------------------------
struct GNET_Octet
{
    unsigned char* data;
    int size;
    int maxsize;

    void insert(const char* inptr, int len, int reserved)
    {
        maxsize = size + len + reserved;
        data = (unsigned char*)realloc(data, maxsize);
        if (!data)
        {
            throw "Memory error!";
        }
        /*
         unsigned char *tmp_ptr = (unsigned char*)malloc(maxsize);
         if(data)
          {
          memcpy(tmp_ptr,data,size);
          free(data);
          }  */
        memcpy(&data[size], inptr, len);
        memset(&data[len + size], 0, reserved);
        size += len;
        //data = tmp_ptr;
    }

    void erase_first(int len)
    {
        lamecopy(data, &data[len], (size - len));
        size -= len;
    }

    void Clear()
    {
        if (data)free(data);
        memset(this, 0, sizeof(GNET_Octet));
    }

};

//---------------------------------------------------------------------------
struct mppc
{
    unsigned char history[8192];
    unsigned char* histptr;
    unsigned int l;
    unsigned int adjust_l;
    unsigned int blen;
    unsigned int blen_total;
    unsigned char* rptr;
    unsigned char* adjust_rptr;
    GNET_Octet legacy_in;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    void Init()
    {
        memset(this, 0, sizeof(mppc));
        histptr = history;
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    void Clear()
    {
        legacy_in.Clear();
        Init();
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    unsigned int bSwap(unsigned int x)
    {
        return BSWAP_32(x);
    }

    int fetch()
    {
        rptr += (l >> 3);
        l &= 7;
        return bSwap(*(int*)rptr) << l;
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    int passbits(int num)
    {
        l += num;
        blen += num;
        if (blen >= blen_total)
        {
            l = adjust_l;
            rptr = adjust_rptr;
            return 0;
        }
        return 1;
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    int Decompress(const char* data_c, const int size_c, char* data_out, unsigned int* size_out)
    {
        //printf("voidDecompress");
        int v19; // [sp+Ch] [bp-1Ch]@16
        int offs; // [sp+10h] [bp-18h]@12
        int olen; // [sp+14h] [bp-14h]@33
        int ival2; // [sp+18h] [bp-10h]@30


        legacy_in.insert(data_c, size_c, 3);
        blen_total = 8 * legacy_in.size - l;
        rptr = legacy_in.data;
        blen = 7;
        unsigned char* history__ppt = histptr;

        while (blen_total > blen)
        {
            adjust_l = l;
            adjust_rptr = rptr;
            int ival = fetch();

            if (ival >= 0)
            {
                if (!passbits(8))break;
                *histptr++ = ((unsigned int)ival >> 24);
                continue;
            }

            if ((unsigned int)ival <= 0xBFFFFFFF)
            {
                if (!passbits(9))break;
                *histptr++ = ((unsigned int)ival >> 23) | 0x80;
                continue;
            }

            offs = 0;
            if ((unsigned int)ival <= 0xEFFFFFFF)
            {
                if ((unsigned int)ival <= 0xDFFFFFFF)
                {
                    if ((unsigned int)ival > 0xBFFFFFFF)
                    {
                        if (!passbits(16))break;
                        offs = (((unsigned int)ival >> 16) & 0x1FFF) + 320;
                    }
                }
                else
                {
                    if (!passbits(12))break;
                    offs = (((unsigned int)ival >> 20) & 0xFF) + 64;
                }


            LABEL_30:
                ival2 = fetch();
                if (ival2 < 0)
                {
                    if ((unsigned int)ival2 > 0xBFFFFFFF)
                    {
                        if ((unsigned int)ival2 > 0xDFFFFFFF)
                        {
                            if ((unsigned int)ival2 > 0xEFFFFFFF)
                            {
                                if ((unsigned int)ival2 > 0xF7FFFFFF)
                                {
                                    if ((unsigned int)ival2 > 0xFBFFFFFF)
                                    {
                                        if ((unsigned int)ival2 > 0xFDFFFFFF)
                                        {
                                            if ((unsigned int)ival2 > 0xFEFFFFFF)
                                            {
                                                if ((unsigned int)ival2 > 0xFF7FFFFF)
                                                {
                                                    if ((unsigned int)ival2 > 0xFFBFFFFF)
                                                    {
                                                        if ((unsigned int)ival2 > 0xFFDFFFFF)
                                                        {
                                                            if ((unsigned int)ival2 > 0xFFEFFFFF)
                                                            {
                                                                l = adjust_l;
                                                                rptr = adjust_rptr;
                                                                break;
                                                            }
                                                            if (!passbits(24))break;
                                                            olen = (((unsigned int)ival2 >> 8) & 0xFFF) | 0x1000;
                                                        }
                                                        else
                                                        {
                                                            if (!passbits(22))break;
                                                            olen = (((unsigned int)ival2 >> 10) & 0x7FF) | 0x800;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if (!passbits(20))break;
                                                        olen = (((unsigned int)ival2 >> 12) & 0x3FF) | 0x400;
                                                    }
                                                }
                                                else
                                                {
                                                    if (!passbits(18))break;
                                                    olen = (((unsigned int)ival2 >> 14) & 0x1FF) | 0x200;
                                                }
                                            }
                                            else
                                            {
                                                if (!passbits(16))break;
                                                olen = (((unsigned int)ival2 >> 16) & 0xFF) | 0x100;
                                            }
                                        }
                                        else
                                        {
                                            if (!passbits(14))break;
                                            olen = (((unsigned int)ival2 >> 18) & 0x7F) | 0x80;
                                        }
                                    }
                                    else
                                    {
                                        if (!passbits(12))break;
                                        olen = (((unsigned int)ival2 >> 20) & 0x3F) | 0x40;
                                    }
                                }
                                else
                                {
                                    if (!passbits(10)) break;
                                    olen = (((unsigned int)ival2 >> 22) & 0x1F) | 0x20;
                                }
                            }
                            else
                            {
                                if (!passbits(8))break;
                                olen = (((unsigned int)ival2 >> 24) & 0xF) | 0x10;
                            }
                        }
                        else
                        {
                            if (!passbits(6))break;
                            olen = (((unsigned int)ival2 >> 26) & 7) | 8;
                        }
                    }
                    else
                    {
                        if (!passbits(4))break;
                        olen = (((unsigned int)ival2 >> 28) & 3) | 4;
                    }
                }
                else
                {
                    if (!passbits(1))break;
                    olen = 3;
                }
                if (&histptr[-offs] < (unsigned char*)this
                    || &histptr[olen] > (unsigned char*) & this->histptr)break;

                lamecopy(histptr, &histptr[-offs], olen);
                histptr += olen;
            }
            else
            {
                if (!passbits(10))break;
                offs = ((unsigned int)ival >> 22) & 0x3F;
                if (offs)goto LABEL_30;

                v19 = 8 - (l & 7);
                if (v19 <= 7 && !passbits(v19))break;


                memcpy(&data_out[*size_out], history__ppt, ((size_t)histptr - (size_t)history__ppt));
                *size_out += ((size_t)histptr - (size_t)history__ppt);

                if (((size_t)histptr - (size_t)this) == 8192)
                    histptr = (unsigned char*)this;
                history__ppt = histptr;
            }




        }

        memcpy(&data_out[*size_out], history__ppt, ((size_t)histptr - (size_t)history__ppt));
        *size_out += ((size_t)histptr - (size_t)history__ppt);


        legacy_in.erase_first((size_t)rptr - (size_t)legacy_in.data);
        return 0;
    }
};


#endif




