#include "fib.hpp"

#include <iostream>

void
fib::print(const deffn& f, const ulong n)
{
	cout << f.first << ':';
	for(ulong i{}; i < n; i++)
	{
		cout << ' ' << f.second(i);
	}
	cout << endl;
}
