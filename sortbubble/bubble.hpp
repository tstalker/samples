#pragma once

#include <vector>

namespace gen
{
template <typename T>
	void bubble(std::vector<T>&);
}

template <typename T>
void gen::bubble(std::vector<T> &v)
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
