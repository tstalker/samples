#pragma once

#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>

namespace prn
{
	constexpr auto TAB('\t');

template <typename T>
	void print1(const T&);
template <typename T>
	void print1os(std::ostream&, const T&);
template <typename T>
	void printv(const T*, std::size_t);
template <typename T>
	void print(const T*, std::size_t, std::size_t, std::size_t);
template <typename T, std::size_t N>
	void print(const T(&)[N]);
template <typename T, std::size_t N1, std::size_t N2>
	void print(const T(&)[N1][N2], std::size_t);
template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
	void print(const T(&)[N0][N1][N2]);
template <typename T, std::size_t N>
	decltype(auto) operator << (std::ostream&, const T(&)[N]);
template <typename T, std::size_t N0, std::size_t N1>
	decltype(auto) operator << (std::ostream&, const T(&)[N0][N1]);
template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
	decltype(auto) operator << (std::ostream&, const T(&)[N0][N1][N2]);
}

template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
void prn::print(const T(&v)[N0][N1][N2])
{
	std::ostream_iterator<decltype(TAB)> it(std::cout);
	for(std::size_t i{}; i < N0; i++)
	{
		for(std::size_t j{}; j < N1; j++)
		{
			std::fill_n(it, i, TAB);
			print(v[i][j]);
		}
	}
}

template <typename T, std::size_t N1, std::size_t N2>
void prn::print(const T(&v)[N1][N2], std::size_t n0)
{
	std::ostream_iterator<decltype(TAB)> it(std::cout);
	for(std::size_t i{}; i < n0; i++)
	{
		for(std::size_t j{}; j < N1; j++)
		{
			std::fill_n(it, i, TAB);
			printv(v[N1 * i + j], N2);
		}
	}
}

template <typename T, std::size_t N>
void prn::print(const T(&v)[N])
{
	std::for_each(std::cbegin(v), std::cend(v), print1<T>);
	std::cout << std::endl;
}

template <typename T>
void prn::print(const T* v, std::size_t n0, std::size_t n1, std::size_t n2)
{
	std::ostream_iterator<decltype(TAB)> it(std::cout);
	for(std::size_t i{}; i < n0; i++)
	{
		for(std::size_t j{}; j < n1; j++)
		{
			std::fill_n(it, i, TAB);
			printv(v + n2 * (n1 * i + j), n2);
		}
	}
}

template <typename T>
void prn::printv(const T* v, std::size_t n)
{
	std::for_each_n(v, n, print1<T>);
	std::cout << std::endl;
}

template <typename T>
void prn::print1(const T& x)
{
	print1os(std::cout, x);
}

template <typename T>
void prn::print1os(std::ostream& os, const T& x)
{
	os << std::setw(3) << x;
}

template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
decltype(auto) prn::operator << (std::ostream& os, const T(&v)[N0][N1][N2])
{
	for(auto& w: v)
	{
		os << std::endl << w;
	}
	return os;
}

template <typename T, std::size_t N0, std::size_t N1>
decltype(auto) prn::operator << (std::ostream& os, const T(&v)[N0][N1])
{
	for(auto& w: v)
	{
		os << w;
	}
	return os;
}

template <typename T, std::size_t N>
decltype(auto) prn::operator << (std::ostream& os, const T(&v)[N])
{
	auto fn(std::bind(print1os<T>, std::ref(os), std::placeholders::_1));
	std::for_each(std::cbegin(v), std::cend(v), fn);
	os << std::endl;
	return os;
}

using prn::operator <<;
