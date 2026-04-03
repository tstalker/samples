#include "fib.h"

#include <math.h>

ulong bine(ulong n)
{
	return lround(pow(phi, n) / sqrt5);
}
