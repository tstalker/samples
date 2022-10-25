#include "fib.h"

ulong cycle(culong n)
{
	ulong r = 0;
	for(ulong i = 0, x = 1, y = 0; i < n; i++, x = y, y = r)
	{
		r = x + y;
	}
	return r;
}
