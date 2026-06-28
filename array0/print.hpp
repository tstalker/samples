#pragma once

#include <algorithm>
#include <iostream>
#include <ranges>

namespace prn
{
template <typename T, std::size_t N>
	void print(const T(&)[N]);
template <typename T>
	void print(std::span<T>);

template <typename T, std::size_t N>
	decltype(auto) operator <<(std::ostream&, const T(&)[N]);
template <typename T>
	decltype(auto) operator <<(std::ostream&, std::span<T>);
}

template <typename T, std::size_t N>
void prn::print(const T(&src)[N])
{
	std::span pool(std::ranges::cbegin(src), std::ranges::cend(src));
	print(pool);
}

template <typename T>
void prn::print(std::span<T> pool)
{
	std::cout << pool << std::endl;
}

template <typename T, std::size_t N>
decltype(auto) prn::operator <<(std::ostream& os, const T(&src)[N])
{
	std::span pool(std::ranges::cbegin(src), std::ranges::cend(src));
	os << pool;
	return os;
}

template <typename T>
decltype(auto) prn::operator <<(std::ostream& os, std::span<T> pool)
{
	std::ostream_iterator<T> it(os, " ");
	std::ranges::copy(pool, it);
	return os;
}

using prn::operator <<;
