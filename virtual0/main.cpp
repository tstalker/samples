#include "header.hpp"

#include <cstdlib>

int main(void)
{
	const A* pa(new B);
	pa->print();
	delete pa;
	return EXIT_SUCCESS;
}
