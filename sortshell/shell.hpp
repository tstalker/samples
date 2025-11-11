#pragma once

#include <vector>

namespace gen
{
template <typename T>
	void shell(std::vector<T>&);
}

template <typename T>
void gen::shell(std::vector<T> &v)
{
	for(auto gap(v.size() - 1); gap; gap = gap > 2 ? (gap + 2) / 2 : gap / 2)
	{
		for(auto i(gap); i < v.size(); i++)
		{
			const auto x(v[i]);
			auto j(i);

			for(; j >= gap && x < v[j - gap]; j -= gap)
			{
				v[j] = v[j - gap];
			}

			v[j] = x;
		}
	}
}
