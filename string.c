#include <stdio.h>

#define STRING "abcdefghijklmnopqrstuvwxyz"

int main(void)
{
	printf("int: %zd\n", sizeof(int));
	printf("long: %zd\n", sizeof(long));
	const char *s = STRING;
	printf("string: %zd [%s]\n", sizeof STRING, s);
	const int len = 10;
	printf("string: %d [%.*s]\n", len, len, s);
}
