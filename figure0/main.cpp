#include "figure.hpp"

#include <vector>
#include <cstdlib>
#include <iomanip>

int main(void)
{
	const std::vector <geom::figure> v
	{
		{ geom::figure_type::CIRCLE, 3 },
		{ geom::figure_type::TRIANGLE, 3, 4, 5 },
		{ geom::figure_type::SQUARE, 3 },
		{ geom::figure_type::RECTANGLE, 3, 4 }
	};

	for(const auto& x: v)
		std::cout << std::setprecision(4) << x << " perimeter: " << x.perimeter() << " area: " << x.area() << std::endl;
	return EXIT_SUCCESS;
}

const double geom::figure::PI(3.1415926);
