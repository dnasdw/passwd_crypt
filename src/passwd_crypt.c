#define _XOPEN_SOURCE
#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	const char* pPassword = "admin";
	const char* pSalt = "$1$b2UnneZ.";
	const char* pEncrypted = crypt(pPassword, pSalt);
	if (pEncrypted != NULL)
	{
		printf("%s\n", pEncrypted);
		return 0;
	}
	return 1;
}
