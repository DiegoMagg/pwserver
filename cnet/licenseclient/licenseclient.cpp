#include <cstdio>
#include "liblicense.h"

int main()
{
	int result = 0;
	if ( GNET::LicenseInterfaces::Init("189.127.164.9" , 33000 , "teste" , "teste", "licenseclient", result) )
	{
		printf("LICENSE: Result = %d --OK-- \n", result );
	}
	else
	{
		printf("LICENSE: Result = %d --FAIL-- \n", result  );
	}
	return 0;
}

