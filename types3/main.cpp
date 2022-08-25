#include "generic.hpp"

int main(void)
{
	gen::print<bool>();

	gen::print<char>();
	gen::print<signed char>();
	gen::print<unsigned char>();

	gen::print<char8_t>();
	gen::print<char16_t>();
	gen::print<char32_t>();
	gen::print<wchar_t>();

	gen::print<short>();
	gen::print<unsigned short>();

	gen::print<int>();
	gen::print<unsigned>();

	gen::print<long>();
	gen::print<unsigned long>();

	gen::print<long long>();
	gen::print<unsigned long long>();

	gen::print<float>();
	gen::print<double>();
	gen::print<long double>();

	return EXIT_SUCCESS;
}
