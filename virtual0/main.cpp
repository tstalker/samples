#include "header.hpp"

#include <cstdlib>

int main(void)
{
	const A* pa(new B(0, 1));
	pa->print();
	delete pa;
	return EXIT_SUCCESS;
}
