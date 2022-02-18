#include <limits>
#include <string>
#include <iostream>

template <typename T, typename U> std::pair <U, U>
	limits(std::numeric_limits <T> ::min(), std::numeric_limits <T> ::max());
template <> std::pair <std::string, std::string>
	limits <bool, bool> ("false", "true");

template <typename T, typename U> void print(const std::string& s)
{
	std::cout << s << ": " << sizeof(T)
		<< " min: " << limits <T, U> .first
		<< " max: " << limits <T, U> .second << std::endl;
}

template <typename T> void print(const std::string& s)
{
	print <T, T> (s);
}

int main(void)
{
	print <bool> ("bool");

	print <char, short> ("char");
	print <signed char, signed short> ("signed char");
	print <unsigned char, unsigned short> ("unsigned char");
	print <wchar_t> ("wchar_t");
	print <char16_t> ("char16_t");
	print <char32_t> ("char32_t");

	print <short> ("short");
	print <signed short> ("signed short");
	print <unsigned short> ("unsigned short");
	print <int> ("int");
	print <signed> ("signed int");
	print <unsigned> ("unsigned int");
	print <long> ("long");
	print <signed long> ("signed long");
	print <unsigned long> ("unsigned long");
	print <long long> ("long long");
	print <signed long long> ("signed long long");
	print <unsigned long long> ("unsigned long long");

	print <float> ("float");
	print <double> ("double");
	print <long double> ("long double");
}
