#include "header.hpp"

#include <algorithm>

void sort(type* x, const size_t n)
{
	for(size_t i{}; i < n; i++)
	{
		for(size_t j{}; j < n; j++)
		{
			if(x[i] < x[j])
			{
				std::swap(x[i], x[j]);
			}
		}
	}
}
