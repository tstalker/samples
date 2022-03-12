#include "header.hpp"

#include <cstdlib>

void init(type* p, const std::size_t n)
{
	const std::size_t LIM(100);
	for(std::size_t i{}; i < n; i++)
	{
		p[i] = rand() % LIM;
	}
}
