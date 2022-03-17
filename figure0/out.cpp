#include "figure.hpp"

auto geo::operator << (ostream& o, const figure& f) ->
	ostream&
{
	switch(f.t)
	{
	default:
		o << "Error: invalid figure type";
		break;
	case figure_type::CIRCLE:
		o << "CIRCLE {" << f.x << '}';
		break;
	case figure_type::TRIANGLE:
		o << "TRIANGLE {" << f.x << ", " << f.y << ", " << f.z << '}';
		break;
	case figure_type::SQUARE:
		o << "SQUARE {" << f.x << '}';
		break;
	case figure_type::RECTANGLE:
		o << "RECTANGLE {" << f.x << ", " << f.y << '}';
	}
	return o;
}
