#include "print.hpp"

#include <iostream>

void prn::print(string_view s, const unsigned* p, const size_t n)
{
	cout << s << ':' << endl;
	for(size_t i{}; i < n; i++)
	{
		cout << &p[i] << ' ' << p[i] << endl;
	}
}
