#include "header.hpp"

#include <algorithm>

void sort(std::vector <type> &v)
{
	for(auto& x: v)
	{
		for(auto& y: v)
		{
			if(x < y)
			{
				std::swap(x, y);
			}
		}
	}
}
