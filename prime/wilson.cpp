#include "fib.hpp"

bool
fib::wilson(
	culong x)
{
	return x <= 1 ? x : !((bine(x - 1) + 1) % x);
}
