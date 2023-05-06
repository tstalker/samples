#include "generic.hpp"

#include <cfloat>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cwchar>

int main(void)
{
	std::printf("bool: %zu min: %s max: %s\n", sizeof(bool), "false", "true");

	std::printf("char: %zu min: " FORMAT " max: " FORMAT "\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	std::printf("signed char: %zu min: %d max: %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
	std::printf("unsigned char: %zu min: %u max: %u\n", sizeof(unsigned char), 0u, UCHAR_MAX);

	std::printf("char8_t: %zu min: %u max: %u\n", sizeof(char8_t), 0u, UCHAR_MAX);
	std::printf("char16_t: %zu min: %u max: %u\n", sizeof(char16_t), 0u, USHRT_MAX);
	std::printf("char32_t: %zu min: %u max: %u\n", sizeof(char32_t), 0u, UINT_MAX);
	std::printf("wchar_t: %zu min: %u max: %u\n", sizeof(wchar_t), WCHAR_MIN, WCHAR_MAX);

	std::printf("short: %zu min: %d max: %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	std::printf("unsigned short: %zu min: %u max: %u\n", sizeof(unsigned short), 0u, USHRT_MAX);

	std::printf("int: %zu min: %d max: %d\n", sizeof(int), INT_MIN, INT_MAX);
	std::printf("unsigned int: %zu min: %u max: %u\n", sizeof(unsigned), 0u, UINT_MAX);

	std::printf("long: %zu min: %ld max: %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	std::printf("unsigned long: %zu min: %lu max: %lu\n", sizeof(unsigned long), 0ul, ULONG_MAX);

	std::printf("long long: %zu min: %lld max: %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
	std::printf("unsigned long long: %zu min: %llu max: %llu\n", sizeof(unsigned long long), 0ull, ULLONG_MAX);

	std::printf("float: %zu min: %g max: %g\n", sizeof(float), FLT_MIN, FLT_MAX);
	std::printf("double: %zu min: %lg max: %lg\n", sizeof(double), DBL_MIN, DBL_MAX);
	std::printf("long double: %zu min: %Lg max: %Lg\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

	return EXIT_SUCCESS;
}
