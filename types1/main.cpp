#include <limits>
#include <cstddef>
#include <cstdlib>
#include <iostream>

int main(void)
{
	std::cout << "bool: " << sizeof(bool)
		<< " min: " << std::numeric_limits <bool> ::min()
		<< " max: " << std::numeric_limits <bool> ::max() << std::endl;
	std::cout << "byte: " << sizeof(std::byte)
		<< " min: " << static_cast <std::size_t> (std::numeric_limits <unsigned char> ::min())
		<< " max: " << static_cast <std::size_t> (std::numeric_limits <unsigned char> ::max()) << std::endl;

	std::cout << "char: " << sizeof(char)
		<< " min: " << static_cast <int> (std::numeric_limits <char> ::min())
		<< " max: " << static_cast <int> (std::numeric_limits <char> ::max()) << std::endl;
	std::cout << "signed char: " << sizeof(signed char)
		<< " min: " << static_cast <int> (std::numeric_limits <signed char> ::min())
		<< " max: " << static_cast <int> (std::numeric_limits <signed char> ::max()) << std::endl;
	std::cout << "unsigned char: " << sizeof(unsigned char)
		<< " min: " << static_cast <std::size_t> (std::numeric_limits <unsigned char> ::min())
		<< " max: " << static_cast <std::size_t> (std::numeric_limits <unsigned char> ::max()) << std::endl;

	std::cout << "char8_t: " << sizeof(char8_t)
		<< " min: " << static_cast <std::size_t> (std::numeric_limits <char8_t> ::min())
		<< " max: " << static_cast <std::size_t> (std::numeric_limits <char8_t> ::max()) << std::endl;
	std::cout << "char16_t: " << sizeof(char16_t)
		<< " min: " << static_cast <std::size_t> (std::numeric_limits <char16_t> ::min())
		<< " max: " << static_cast <std::size_t> (std::numeric_limits <char16_t> ::max()) << std::endl;
	std::cout << "char32_t: " << sizeof(char32_t)
		<< " min: " << static_cast <std::size_t> (std::numeric_limits <char32_t> ::min())
		<< " max: " << static_cast <std::size_t> (std::numeric_limits <char32_t> ::max()) << std::endl;
	std::cout << "wchar_t: " << sizeof(wchar_t)
		<< " min: " << static_cast <std::size_t> (std::numeric_limits <wchar_t> ::min())
		<< " max: " << static_cast <std::size_t> (std::numeric_limits <wchar_t> ::max()) << std::endl;

	std::cout << "short: " << sizeof(short)
		<< " min: " << std::numeric_limits <short> ::min()
		<< " max: " << std::numeric_limits <short> ::max() << std::endl;
	std::cout << "unsigned short: " << sizeof(unsigned short)
		<< " min: " << std::numeric_limits <unsigned short> ::min()
		<< " max: " << std::numeric_limits <unsigned short> ::max() << std::endl;

	std::cout << "int: " << sizeof(int)
		<< " min: " << std::numeric_limits <int> ::min()
		<< " max: " << std::numeric_limits <int> ::max() << std::endl;
	std::cout << "unsigned int: " << sizeof(unsigned)
		<< " min: " << std::numeric_limits <unsigned> ::min()
		<< " max: " << std::numeric_limits <unsigned> ::max() << std::endl;

	std::cout << "long: " << sizeof(long)
		<< " min: " << std::numeric_limits <long> ::min()
		<< " max: " << std::numeric_limits <long> ::max() << std::endl;
	std::cout << "unsigned long: " << sizeof(unsigned long)
		<< " min: " << std::numeric_limits <unsigned long> ::min()
		<< " max: " << std::numeric_limits <unsigned long> ::max() << std::endl;

	std::cout << "long long: " << sizeof(long long)
		<< " min: " << std::numeric_limits <long long> ::min()
		<< " max: " << std::numeric_limits <long long> ::max() << std::endl;
	std::cout << "unsigned long long: " << sizeof(unsigned long long)
		<< " min: " << std::numeric_limits <unsigned long long> ::min()
		<< " max: " << std::numeric_limits <unsigned long long> ::max() << std::endl;

	std::cout << "float: " << sizeof(float)
		<< " min: " << std::numeric_limits <float> ::min()
		<< " max: " << std::numeric_limits <float> ::max() << std::endl;
	std::cout << "double: " << sizeof(double)
		<< " min: " << std::numeric_limits <double> ::min()
		<< " max: " << std::numeric_limits <double> ::max() << std::endl;
	std::cout << "long double: " << sizeof(long double)
		<< " min: " << std::numeric_limits <long double> ::min()
		<< " max: " << std::numeric_limits <long double> ::max() << std::endl;

	return EXIT_SUCCESS;
}
