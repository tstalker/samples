#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>

namespace prn
{
template <typename T, std::size_t N>
	void print(const T(&)[N]);
template <typename T>
	void print(const std::initializer_list<T>&);
template <typename T, std::size_t N>
	decltype(auto) operator << (std::ostream&, const T(&)[N]);
template <typename T>
	decltype(auto) operator << (std::ostream&, const std::initializer_list<T>&);
}

template <typename T, std::size_t N>
void prn::print(const T(&v)[N])
{
	auto it{std::ostream_iterator<T>(std::cout, " ")};
	std::copy(std::cbegin(v), std::cend(v), it);
	std::cout << std::endl;
}

template <typename T>
void prn::print(const std::initializer_list<T> &v)
{
	auto it{std::ostream_iterator<T>(std::cout, " ")};
	std::copy(v.begin(), v.end(), it);
	std::cout << std::endl;
}

template <typename T, std::size_t N>
decltype(auto) prn::operator << (std::ostream& os, const T(&v)[N])
{
	auto it{std::ostream_iterator<T>(os, " ")};
	std::copy(std::cbegin(v), std::cend(v), it);
	os << std::endl;
	return os;
}

template <typename T>
decltype(auto) prn::operator << (std::ostream& os, const std::initializer_list<T> &v)
{
	auto it{std::ostream_iterator<T>(os, " ")};
	std::copy(v.begin(), v.end(), it);
	os << std::endl;
	return os;
}

using prn::operator <<;
