#include "math.hpp"

auto math::fact(culong x) -> ulong
{
	return x ? x * fact(x - 1) : 1;
}
