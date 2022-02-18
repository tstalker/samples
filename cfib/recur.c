#include "fib.h"

ulong recur(culong n)
{
	return n < 2 ? n : recur(n - 1) + recur(n - 2);
}
