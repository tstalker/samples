#include "header.hpp"

int
main(void)
{
	const A* pa(new D(12345));
	pa->print();
	delete pa;
	return EXIT_SUCCESS;
}
