#include "print.hpp"

#include <cstdarg>
#include <iostream>

void prn::print(string_view s, ...)
{
	va_list va;
	va_start(va, s);

	for(const auto& c: s)
	{
		switch(c)
		{
		default:
			cerr << endl << "Error: format symbol \'" << c << '\'' << endl;
			break;
		case 'c':
			cout << static_cast<char>(va_arg(va, int));
			break;
		case 'i':
			cout << va_arg(va, int);
			break;
		case 'd':
		case 'f':
			cout << va_arg(va, double);
			break;
		case 's':
			cout << va_arg(va, const char*);
		}
		cout << ' ';
	}
	va_end(va);
	cout << endl;
}
