#include "circle.hpp"
#include "square.hpp"
#include "triangle.hpp"
#include "rectangle.hpp"

#include <cstdlib>

int main(void)
{
	const std::vector <const geom::figure*> v
	{
		new geom::circle({ 3 }),
		new geom::square({ 3 }),
		new geom::triangle({ 3, 4, 5 }),
		new geom::rectangle({ 3, 4 })
	};

	print(v);

	for(const auto& p: v)
		delete p;

	return EXIT_SUCCESS;
}

const double geom::figure::PI(3.1415926);
