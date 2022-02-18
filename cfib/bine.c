#include "fib.h"

#include <math.h>

ulong bine(culong n)
{
	return round(pow(phi, n) / sqrt5);
}
