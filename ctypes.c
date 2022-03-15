#include <float.h>
#include <stdio.h>
#include <uchar.h>
#include <wchar.h>
#include <limits.h>
#include <stdbool.h>

int main(void)
{
	printf("bool: %u min: %u max: %u\n", sizeof(_Bool), false, true);
	printf("char: %u min: %d max: %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("signed char: %u min: %d max: %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char: %u min: %u max: %u\n", sizeof(unsigned char), 0u, UCHAR_MAX);
	printf("wchar_t: %u min: %d max: %d\n", sizeof(wchar_t), WCHAR_MIN, WCHAR_MAX);
	printf("char16_t: %u min: %u max: %u\n", sizeof(char16_t), 0u, USHRT_MAX);
	printf("char32_t: %u min: %u max: %u\n", sizeof(char32_t), 0u, UINT_MAX);
	printf("short: %u min: %d max: %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("signed short: %u min: %d max: %d\n", sizeof(signed short), SHRT_MIN, SHRT_MAX);
	printf("unsigned short: %u min: %u max: %u\n", sizeof(unsigned short), 0u, USHRT_MAX);
	printf("int: %u min: %d max: %d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("signed int: %u min: %d max: %d\n", sizeof(signed int), INT_MIN, INT_MAX);
	printf("unsigned int: %u min: %u max: %u\n", sizeof(unsigned int), 0u, UINT_MAX);
	printf("long: %u min: %ld max: %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("signed long: %u min: %ld max: %ld\n", sizeof(signed long), LONG_MIN, LONG_MAX);
	printf("unsigned long: %u min: %lu max: %lu\n", sizeof(unsigned long), 0ul, ULONG_MAX);
	printf("long long: %u min: %I64d max: %I64d\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("signed long long: %u min: %I64d max: %I64d\n", sizeof(signed long long), LLONG_MIN, LLONG_MAX);
	printf("unsigned long long: %u min: %I64u max: %I64u\n", sizeof(unsigned long long), 0ull, ULLONG_MAX);
	printf("float: %u min: %g max: %g\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("double: %u min: %lg max: %lg\n", sizeof(double), DBL_MIN, DBL_MAX);
	//printf("long double: %u min: %lg max: %lg\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
}
