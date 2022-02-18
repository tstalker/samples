#include "header.hpp"

#include <cstdlib>

void init(std::array <type, MAX> &v)
{
	for(auto& x: v)
	{
		x = rand() % 100;
	}
}
