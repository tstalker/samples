#include "fib.hpp"

auto fib::recur(culong n) -> ulong
{
	return n < 2 ? n : recur(n - 1) + recur(n - 2);
}
