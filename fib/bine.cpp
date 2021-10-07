#include "fib.hpp"

#include <cmath>

auto fib::bine(culong n) -> ulong
{
	const auto N(5);
	static constexpr auto sqrt5(sqrt(N)), phi((1 + sqrt5) / 2);
	return round(pow(phi, n) / sqrt5);
}
