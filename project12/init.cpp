#include "header.hpp"

#include <cstdlib>

void init(std::vector <type> &v)
{
	for(auto& x: v)
	{
		x = rand() % 100;
	}
}
