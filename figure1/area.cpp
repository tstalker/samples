#include "triangle.hpp"

#include <cmath>

double
gen::triangle::area(void)
const
{
	const auto pp(perimeter() / 2);
	auto y(pp);

	for(const auto& x: v)
	{
		y *= pp - x;
	}

	const auto ret(sqrt(y));
	return ret;
}
