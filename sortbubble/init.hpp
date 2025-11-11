#pragma once

#include <algorithm>
#include <functional>
#include <random>
#include <vector>

namespace gen
{
template <typename T>
	void init(std::vector<T>&, std::size_t);
}

template <typename T>
void gen::init(std::vector<T> &v, std::size_t size)
{
	std::random_device rd;
	std::mt19937 re(rd());
	auto ud(std::conditional_t<std::is_integral_v<T>, std::uniform_int_distribution<T>, std::uniform_real_distribution<T>>(T(), size - 1));
	auto dice(std::bind(ud, re));
	std::generate_n(std::back_inserter(v), size, [&v, &dice](void)
	{
		T x;

		do
		{
			x = dice();
		}
		while(std::find(v.cbegin(), v.cend(), x) != v.cend());

		return x;
	});
}
