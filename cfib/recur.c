#include "fib.h"

ulong recur(ulong n)
{
	return n < 2 ? n : recur(n - 1) + recur(n - 2);
}
