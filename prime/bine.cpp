#include "fib.hpp"

#include <cmath>

auto fib::bine(culong n)
-> ulong
{
	static constexpr auto sqrt5(sqrt(5)), phi((1 + sqrt5) / 2);
	return round(pow(phi, n) / sqrt5);
}
