#include "fib.hpp"

auto
fib::cycle(
	const ulong n)
-> ulong
{
	ulong r{};

	for(ulong i{}, x(1), y{}; i < n; i++, x = y, y = r)
	{
		r = x + y;
	}

	return r;
}
