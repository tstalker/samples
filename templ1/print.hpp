#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>

namespace prn
{
template<class T>
	std::enable_if_t<std::rank_v<T> == 1>
	print(const T&);
}

template<class T>
std::enable_if_t<std::rank_v<T> == 1>
prn::print(const T& v)
{
	auto it(std::ostream_iterator<std::remove_extent_t<T>>(std::cout, " "));
	std::copy_n(v, std::extent_v<T>, it);
	std::cout << std::endl;
}
