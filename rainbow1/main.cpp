#include "rainbow.hpp"

#include <iostream>

int main(void)
{
	for(auto x(rain::rainbow::RED); x < rain::rainbow::BLACK; x = static_cast<rain::rainbow>(static_cast<rain::color>(x) + 1))
	{
		std::cout << rain::get(x) << std::endl;
	}
	return EXIT_SUCCESS;
}
