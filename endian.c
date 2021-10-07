#include <stdio.h>

int main(void)
{
	unsigned short x = 1; // 0x0001
	puts(*(unsigned char*)&x == 0 ? "big-endian" : "little-endian");
}
