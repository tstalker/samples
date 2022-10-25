#pragma once

#include <vector>
#include <iostream>
#include <iterator>

namespace prn
{
template <typename T>
	void print(const std::vector<T>&);
}

template <typename T>
void prn::print(const std::vector<T> &v)
{
	auto it(std::ostream_iterator<T>(std::cout, " "));
	std::copy(v.cbegin(), v.cend(), it);
	std::cout << std::endl;
}
