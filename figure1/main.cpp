#include "circle.hpp"
#include "square.hpp"
#include "triangle.hpp"
#include "rectangle.hpp"

int main(void)
{
	std::vector<const geom::figure*> v
	{
		new geom::circle{3},
		new geom::triangle{3, 4, 5},
		new geom::square{3},
		new geom::rectangle{3, 4}
	};
	print(v);
	for(auto x: v)
	{
		delete x;
	}
	return EXIT_SUCCESS;
}

const double geom::figure::PI(3.1415926);
