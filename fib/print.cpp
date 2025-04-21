#include "fib.hpp"

#include <iostream>

void
fib::print(
	const deffn& f,
	const ulong n)
{
	std::cout << f.first << ':';

	for(ulong i{}; i < n; i++)
	{
		std::cout << ' ' << f.second(i);
	}

	std::cout << std::endl;
}
