#include "print.hpp"

#include <cstdlib>

int main(void)
{
	prn::print <bool> ();
	prn::print <std::byte> ();

	prn::print <char> ();
	prn::print <signed char> ();
	prn::print <unsigned char> ();

	prn::print <char8_t> ();
	prn::print <char16_t> ();
	prn::print <char32_t> ();
	prn::print <wchar_t> ();

	prn::print <short> ();
	prn::print <unsigned short> ();

	prn::print <int> ();
	prn::print <unsigned> ();

	prn::print <long> ();
	prn::print <unsigned long> ();

	prn::print <long long> ();
	prn::print <unsigned long long> ();

	prn::print <float> ();
	prn::print <double> ();
	prn::print <long double> ();

	return EXIT_SUCCESS;
}
