#include "generic.h"

#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

int main(void)
{
	printf("bool: %zu min: %d max: %d\n", sizeof(bool), false, true);

	printf("char: %zu min: " FORMAT " max: " FORMAT "\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("signed char: %zu min: %d max: %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char: %zu min: %u max: %u\n", sizeof(unsigned char), 0u, UCHAR_MAX);
	printf("wchar_t: %zu min: " FORMAT " max: " FORMAT "\n", sizeof(wchar_t), WCHAR_MIN, WCHAR_MAX);

	printf("short: %zu min: %d max: %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("unsigned short: %zu min: %u max: %u\n", sizeof(unsigned short), 0u, USHRT_MAX);

	printf("int: %zu min: %d max: %d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("unsigned int: %zu min: %u max: %u\n", sizeof(unsigned), 0u, UINT_MAX);

	printf("long: %zu min: %ld max: %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("unsigned long: %zu min: %lu max: %lu\n", sizeof(unsigned long), 0ul, ULONG_MAX);

	printf("long long: %zu min: %lld max: %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("unsigned long long: %zu min: %llu max: %llu\n", sizeof(unsigned long long), 0ull, ULLONG_MAX);

	printf("float: %zu min: %g max: %g\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("double: %zu min: %lg max: %lg\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("long double: %zu min: %Lg max: %Lg\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
	return EXIT_SUCCESS;
}
