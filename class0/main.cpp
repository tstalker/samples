#include <iostream>

#include "abc.hpp"

int main(void)
{
	const abc x(42), y(x);
	std::cout << x.get() << std::endl;
	std::cout << y.get() << std::endl;
	return EXIT_SUCCESS;
}
