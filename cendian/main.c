#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const unsigned short x = 1; // 0x0001
	const unsigned char* p = (const unsigned char*)&x;
	const char* s = *p ? "little" : "big";
	printf("%s-endian\n", s);
	return EXIT_SUCCESS;
}
