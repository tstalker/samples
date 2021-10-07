#include "header.hpp"

#include <cstdlib>

void init(type* p, const size_t n)
{
	for(size_t i{}; i < n; i++)
	{
		p[i] = rand() % 100;
	}
}
