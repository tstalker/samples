#include <stdio.h>
#include <stdlib.h>

#define STRING "012345678901234567890123456789"

int main(void)
{
	printf("int: %zd\n", sizeof(int));
	printf("long: %zd\n", sizeof(long));
	const char *s = STRING;
	printf("string: %zd [%s]\n", sizeof STRING, s);
	const int len = 10;
	printf("string: %d [%.*s]\n", len, len, s);
	return EXIT_SUCCESS;
}
