#include "math.hpp"

bool math::wilson(culong x)
{
	return x <= 1 ? x : !((fact(x - 1) + 1) % x);
}
