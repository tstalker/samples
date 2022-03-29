#include "header.hpp"

void gen::shell(vector<int> &v)
{
	for(const size_t gap: {9, 5, 3, 2, 1})
	{
		for(auto i(gap); i < v.size(); i++)
		{
			const auto x(v[i]);
			auto j(i);
			while(j >= gap && x < v[j - gap])
			{
				v[j] = v[j - gap];
				j -= gap;
			}
			v[j] = x;
		}
	}
}
