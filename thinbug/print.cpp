#include "a3.hpp"
#include "utils.hpp"

#include <iostream>

void print(const A* p)
{
	std::cout << p->c << ' ' << p->i << ' ' << p->f << std::endl;
}
