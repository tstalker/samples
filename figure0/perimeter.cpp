#include "figure.hpp"

double geo::figure::perimeter(void) const
{
	double ret{};
	switch(t)
	{
	case figure_type::CIRCLE:
		ret = 2 * PI * x;
		break;
	case figure_type::TRIANGLE:
		ret = x + y + z;
		break;
	case figure_type::SQUARE:
		ret = 4 * x;
		break;
	case figure_type::RECTANGLE:
		ret = 2 * (x + y);
		break;
	default:
		cerr << "Error: invalid figure type" << endl;
	}
	return ret;
}
