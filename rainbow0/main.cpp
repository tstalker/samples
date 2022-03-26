#include "rainbow.hpp"

#include <iostream>

int main(void)
{
	for(auto x(rain::RED); x < rain::BLACK; x = static_cast<rain::rainbow>(x + 1))
	{
		std::cout << rain::get(x) << std::endl;
	}
	return EXIT_SUCCESS;
}
