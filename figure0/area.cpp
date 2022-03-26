#include "figure.hpp"

#include <cmath>

double geo::figure::area(void) const
{
	double ret{};
	switch(t)
	{
	case figure_type::CIRCLE:
		ret = PI * pow(x, 2);
		break;
	case figure_type::TRIANGLE:
	{
		const auto pp(perimeter() / 2);
		ret = sqrt(pp * (pp - x) * (pp - y) * (pp - z));
	}
		break;
	case figure_type::SQUARE:
		ret = pow(x, 2);
		break;
	case figure_type::RECTANGLE:
		ret = x * y;
		break;
	default:
		cerr << "Error: invalid figure type" << endl;
	}
	return ret;
}
