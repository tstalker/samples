#include "generic.hpp"

void gen::fn(const B* p)
{
	std::cout << p->x << std::endl;
}

void gen::fn(const C* p)
{
	std::cout << p->x << std::endl;
}

void gen::fn(const D* p)
{
	std::cout << p->x << std::endl;
}
