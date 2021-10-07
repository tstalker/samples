#include "a3.h"
#include "utils.h"

#include <iostream>

void print(const A* p)
{
	std::cout << p->c << ' ' << p->i << ' ' << p->f << std::endl;
}
