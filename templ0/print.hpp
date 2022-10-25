#pragma once

#include <iomanip>
#include <iostream>
#include <iterator>

namespace prn
{
template <typename T, std::size_t N>
	using type = const T(&)[N];

template <typename T, std::size_t N>
	void print(type<T, N>);
}

template <typename T, std::size_t N>
void prn::print(type<T, N> x)
{
	std::cout << std::showpoint << std::setprecision(2);
	auto it(std::ostream_iterator<T>(std::cout, " "));
	std::copy(std::cbegin(x), std::cend(x), it);
	std::cout << std::endl;
}
