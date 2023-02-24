#include "generic.hpp"

#include <iostream>

int main(void)
{
	gen::ttt x(1);
	std::cout << x.get() << std::endl;
	x.get() = 2;
	std::cout << x.get() << std::endl;
	return EXIT_SUCCESS;
}
