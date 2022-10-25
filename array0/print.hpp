#pragma once

#include <iostream>
#include <iterator>

namespace prn
{
template <typename T>
	void print(const T[], const std::size_t);
template <typename T, std::size_t N>
	void print(const T(&)[N]);
template <typename T>
	void print(const std::initializer_list<T>&);
template <typename T, std::size_t N>
	decltype(auto) operator << (std::ostream&, const T(&)[N]);
template <typename T>
	decltype(auto) operator << (std::ostream&, const std::initializer_list<T>&);
}

template <typename T>
void prn::print(const T v[], const std::size_t n)
{
	auto it(std::ostream_iterator<T>(std::cout, " "));
	std::copy_n(v, n, it);
	std::cout << std::endl;
}

template <typename T, std::size_t N>
void prn::print(const T(&v)[N])
{
	auto it(std::ostream_iterator<T>(std::cout, " "));
	std::copy(std::cbegin(v), std::cend(v), it);
	std::cout << std::endl;
}

template <typename T>
void prn::print(const std::initializer_list<T> &v)
{
	auto it(std::ostream_iterator<T>(std::cout, " "));
	std::copy(v.begin(), v.end(), it);
	std::cout << std::endl;
}

template <typename T, std::size_t N>
decltype(auto) prn::operator << (std::ostream& o, const T(&v)[N])
{
	auto it(std::ostream_iterator<T>(o, " "));
	std::copy(std::cbegin(v), std::cend(v), it);
	o << std::endl;
	return o;
}

template <typename T>
decltype(auto) prn::operator << (std::ostream& o, const std::initializer_list<T> &v)
{
	auto it(std::ostream_iterator<T>(o, " "));
	std::copy(v.begin(), v.end(), it);
	o << std::endl;
	return o;
}

using prn::operator <<;
