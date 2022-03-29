#include "header.hpp"

#include <random>
#include <functional>

void gen::init(vector<int> &v, const size_t size)
{
	random_device rd;
	mt19937 re(rd());
	uniform_int_distribution<> ud(int(), size - 1);
	auto dice(bind(ud, re));
	generate_n(back_inserter(v), size, [&v, &dice](void)
	{
		int x;
		do
		{
			x = dice();
		}
		while(find(v.cbegin(), v.cend(), x) != v.cend());
		return x;
	});
}
