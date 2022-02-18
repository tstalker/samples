#include "header.hpp"

#include <algorithm>

void sort(std::array <type, MAX> &v)
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
