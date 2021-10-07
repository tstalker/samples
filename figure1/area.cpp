#include "triangle.hpp"

#include <cmath>

double geom::triangle::area(void) const
{
	const auto p2(perimeter() / 2);
	auto y(p2);
	for(const auto& x: v)
		y *= p2 - x;
	return sqrt(y);
}
