#pragma once

#include "generic.hpp"

#include <vector>

namespace gen
{
template <typename T>
	void bubble(vector<T>&);
}

template <typename T>
void
gen::bubble(vector<T> &v)
{
	for(auto& x: v)
	{
		for(auto& y: v)
		{
			if(x < y)
			{
				swap(x, y);
			}
		}
	}
}
