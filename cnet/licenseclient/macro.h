#ifndef _MACRO_H_
#define _MACRO_H_

#define SevRand ( rand() * time(0) )

#define setup_char(address,value) *(char*)address = value;
#define setup_uchar(address,value) *(unsigned char*)address = value;
#define setup_short(address,value) *(short*)address = value;
#define setup_ushort(address,value) *(unsigned short*)address = value;
#define setup_int(address,value) *(int*)address = value;
#define setup_uint(address,value) *(unsigned int*)address = value;
#define setup_float(address,value) *(float*)address = value;
#define setup_double(address,value) *(double*)address = value;
#define setup_void(address,value) *(void**)address = (void*)value;
#define setup_long(address,value) *(long long*)address = value;
#define setup_ulong(address,value) *(unsigned long long*)address = value;
#define setup_fillmem(address,value,size) memset((void*)address,value,size);
#define setup_copymem(address,value,size) memcpy((void*)address,value,size);
#define setup_size_t(address,value) *(size_t*)address = value;
#define get_int(address,offset) ( *(int*)( &((char*)address)[offset] )  )
#define get_uint(address,offset) ( *(unsigned int*)( &((char*)address)[offset] )  )
#define get_char(address,offset) ( *(char*)( &((char*)address)[offset] )  )
#define get_uchar(address,offset) ( *(unsigned char*)( &((char*)address)[offset] )  )
#define get_short(address,offset) ( *(short*)( &((char*)address)[offset] )  )
#define get_ushort(address,offset) ( *(unsigned short*)( &((char*)address)[offset] )  )
#define get_float(address,offset) ( *(float*)( &((char*)address)[offset] )  )
#define get_double(address,offset) ( *(double*)( &((char*)address)[offset] )  )
#define get_void(address,offset) ( *(void**)( &((char*)address)[offset] )  )
#define get_long(address,offset) ( *(long long*)( &((char*)address)[offset] )  )
#define get_ulong(address,offset) ( *(unsigned long long*)( &((char*)address)[offset] )  )
#define get_size_t(address,offset) ( *(size_t*)( &((char*)address)[offset] )  )

#define BSWAP_16(_Val) (((_Val << 8) | (_Val >> 8)));

#define BSWAP_32(_Val) ((_Val << 24) | ((_Val << 8) & 0x00FF'0000) | ((_Val >> 8) & 0x0000'FF00) | (_Val >> 24));

#define BSWAP_64(_Val) ((_Val << 56) | ((_Val << 40) & 0x00FF'0000'0000'0000) | ((_Val << 24) & 0x0000'FF00'0000'0000) \
| ((_Val << 8) & 0x0000'00FF'0000'0000) | ((_Val >> 8) & 0x0000'0000'FF00'0000) \
| ((_Val >> 24) & 0x0000'0000'00FF'0000) | ((_Val >> 40) & 0x0000'0000'0000'FF00) | (_Val >> 56));


#endif