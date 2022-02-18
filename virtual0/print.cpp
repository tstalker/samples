#include "header.hpp"

#include <iostream>

void B::print(void) const
{
	std::cout << "B: " << A::i << ' ' << i << std::endl;
}
