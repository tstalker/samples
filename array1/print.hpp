#pragma once

#include <iomanip>
#include <iostream>
#include <functional>

namespace prn
{
template <typename T, std::size_t N0, std::size_t N1>
	void print(const T(&)[N0][N1]);
template <typename T, std::size_t N>
	void print(const T(&)[N]);
template <typename T, std::size_t N1>
	void print(const T(&)[N1], const std::size_t);
template <typename T>
	void print(const T[], const std::size_t, const std::size_t);
template <typename T>
	void printx(const T&);
template <typename T>
	void printy(std::ostream&, const T&);
template <typename T>
	void printv(const T[], const std::size_t);
template <typename T, std::size_t N0, std::size_t N1>
	decltype(auto) operator << (std::ostream&, const T(&)[N0][N1]);
template <typename T, std::size_t N>
	decltype(auto) operator << (std::ostream&, const T(&)[N]);
}

template <typename T, std::size_t N0, std::size_t N1>
void prn::print(const T(&v)[N0][N1])
{
	for(auto& w: v)
	{
		print(w);
	}
}

template <typename T, std::size_t N>
void prn::print(const T(&v)[N])
{
	std::for_each(std::cbegin(v), std::cend(v), printx<T>);
	std::cout << std::endl;
}

template <typename T>
void prn::printx(const T& x)
{
	printy(std::cout, x);
}

template <typename T>
void prn::printy(std::ostream& o, const T& x)
{
	o << std::setw(3) << x;
}

template <typename T, std::size_t N1>
void prn::print(const T(&v)[N1], const std::size_t n0)
{
	for(std::size_t i{}; i < n0; i++)
	{
		printv(v + N1 * i, N1);
	}
}

template <typename T>
void prn::print(const T v[], const std::size_t n0, const std::size_t n1)
{
	for(std::size_t i{}; i < n0; i++)
	{
		printv(v + n1 * i, n1);
	}
}

template <typename T>
void prn::printv(const T v[], const std::size_t n)
{
	std::for_each_n(v, n, printx<T>);
	std::cout << std::endl;
}

template <typename T, std::size_t N0, std::size_t N1>
decltype(auto) prn::operator << (std::ostream& o, const T(&v)[N0][N1])
{
	for(auto& w: v)
	{
		o << w;
	}
	return o;
}

template <typename T, std::size_t N>
decltype(auto) prn::operator << (std::ostream& o, const T(&v)[N])
{
	auto f(std::bind(printy<T>, std::ref(o), std::placeholders::_1));
	std::for_each(std::cbegin(v), std::cend(v), f);
	o << std::endl;
	return o;
}

using prn::operator <<;
