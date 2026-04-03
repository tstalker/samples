#include "fib.hpp"

#include <cmath>

auto fib::bine(const ulong n)
-> ulong
{
	static const auto sqrt5(std::sqrt(5));
	static const auto phi((1 + sqrt5) / 2);
	const auto ret(std::round(std::pow(phi, n) / sqrt5));
	return ret;
}
