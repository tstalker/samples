#include "circle.hpp"
#include "square.hpp"
#include "triangle.hpp"
#include "rectangle.hpp"

int
main(void)
{
	std::vector<const gen::figure*> v
	{
		new gen::circle{3},
		new gen::triangle{3, 4, 5},
		new gen::square{3},
		new gen::rectangle{3, 4}
	};
	print(v);
	for(auto x: v)
	{
		delete x;
	}
	return EXIT_SUCCESS;
}

const double gen::figure::PI(3.1415926);
