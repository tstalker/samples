#pragma once

#include "generic.hpp"

#include <random>
#include <vector>
#include <functional>

namespace gen
{
template <typename T>
	void init(vector<T>&, const size_t);
}

template <typename T>
void
gen::init(vector<T> &v, const size_t size)
{
	random_device rd;
	mt19937 re(rd());
	auto ud(conditional_t<is_integral_v<T>, uniform_int_distribution<T>, uniform_real_distribution<T>>(T(), size - 1));
	auto dice(bind(ud, re));
	generate_n(back_inserter(v), size, [&v, &dice](void)
	{
		T x;
		do
		{
			x = dice();
		}
		while(find(v.cbegin(), v.cend(), x) != v.cend());
		return x;
	});
}
