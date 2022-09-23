#include "fib.h"

#include <math.h>

ulong
bine(
	culong n)
{
	culong ret = lround(pow(phi, n) / sqrt5);
	return ret;
}
