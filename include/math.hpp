#ifdef MATH_HPP
#error Redefined header math.hpp
#endif

#define MATH_HPP

#ifndef TYPES_HPP
#include "types.hpp"
#endif

namespace math
{
	using namespace types;
	ulong fact(culong);
	bool wilson(culong);
}
