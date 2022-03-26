#include "figure.hpp"

auto geo::operator << (ostream& o, const figure& f) ->
	ostream&
{
	switch(f.t)
	{
	case figure_type::CIRCLE:
		o << "Circle {" << f.x << '}';
		break;
	case figure_type::TRIANGLE:
		o << "Triangle {" << f.x << ", " << f.y << ", " << f.z << '}';
		break;
	case figure_type::SQUARE:
		o << "Square {" << f.x << '}';
		break;
	case figure_type::RECTANGLE:
		o << "Rectangle {" << f.x << ", " << f.y << '}';
		break;
	default:
		o << "Error: invalid figure type";
	}
	return o;
}
