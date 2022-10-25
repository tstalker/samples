#include "figure.hpp"

#include <vector>
#include <iomanip>

int main(void)
{
	const std::vector<geo::figure> v
	{
		{geo::figure_type::CIRCLE, 3},
		{geo::figure_type::TRIANGLE, 3, 4, 5},
		{geo::figure_type::SQUARE, 3},
		{geo::figure_type::RECTANGLE, 3, 4}
	};

	for(const auto& x: v)
	{
		std::cout << std::setprecision(4) << x << " perimeter: " << x.perimeter() << " area: " << x.area() << std::endl;
	}

	return EXIT_SUCCESS;
}

const double geo::figure::PI(3.1415926);
