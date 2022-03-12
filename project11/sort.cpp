#include "header.hpp"

#include <algorithm>

void sort(type* x, const std::size_t n)
{
	for(std::size_t i{}; i < n; i++)
	{
		for(std::size_t j{}; j < n; j++)
		{
			if(x[i] < x[j])
			{
				std::swap(x[i], x[j]);
			}
		}
	}
}
