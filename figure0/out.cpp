#include "figure.hpp"

std::ostream& operator << (std::ostream& o, const geom::figure& f)
{
	switch(f.t)
	{
	default:
		o << "Error: invalid figure type";
		break;
	case geom::figure_type::CIRCLE:
		o << "CIRCLE { " << f.x << " }";
		break;
	case geom::figure_type::TRIANGLE:
		o << "TRIANGLE { " << f.x << ", " << f.y << ", " << f.z << " }";
		break;
	case geom::figure_type::SQUARE:
		o << "SQUARE { " << f.x << " }";
		break;
	case geom::figure_type::RECTANGLE:
		o << "RECTANGLE { " << f.x << ", " << f.y << " }";
	}
	return o;
}
