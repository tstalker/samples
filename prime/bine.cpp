#include "fib.hpp"

#include <cmath>

auto fib::bine(culong n)
-> ulong
{
	static constexpr auto sqrt5(sqrt(5));
	static constexpr auto phi((1 + sqrt5) / 2);
	const auto ret(round(pow(phi, n) / sqrt5));
	return ret;
}
