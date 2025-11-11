#include "fib.hpp"

#include <cmath>

auto fib::bine(culong n)
-> ulong
{
	static const auto sqrt5(sqrt(5));
	static const auto phi((1 + sqrt5) / 2);
	const auto ret(std::round(std::pow(phi, n) / sqrt5));
	return ret;
}
