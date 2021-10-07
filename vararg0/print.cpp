#include "print.hpp"

#include <cstdarg>
#include <iostream>

void print(std::string_view s, ...)
{
	va_list va;
	va_start(va, s);
	for(const auto& c: s)
	{
		switch(c)
		{
		default:
			std::cerr << std::endl << "Error: format symbol \'" << c << '\'' << std::endl;
			break;
		case 'c':
			std::cout << static_cast <char> (va_arg(va, int));
			break;
		case 'i':
			std::cout << va_arg(va, int);
			break;
		case 'd':
		case 'f':
			std::cout << va_arg(va, double);
			break;
		case 's':
			std::cout << va_arg(va, const char*);
		}
		std::cout << ' ';
	}
	va_end(va);
	std::cout << std::endl;
}
