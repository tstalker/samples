#pragma once

#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>

namespace prn
{
template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
	void print(const T(&)[N0][N1][N2]);
template <typename T, std::size_t N1, std::size_t N2>
	void print(const T(&)[N1][N2], std::size_t);
template <typename T, std::size_t N>
	void print(const T(&)[N]);
template <typename T>
	void print(const T*, std::size_t, std::size_t, std::size_t);
template <typename T>
	void printv(const T*, std::size_t);
template <typename T>
	void printx(const T&);
template <typename T>
	void printy(std::ostream&, const T&);
template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
	decltype(auto) operator << (std::ostream&, const T(&)[N0][N1][N2]);
template <typename T, std::size_t N0, std::size_t N1>
	decltype(auto) operator << (std::ostream&, const T(&)[N0][N1]);
template <typename T, std::size_t N>
	decltype(auto) operator << (std::ostream&, const T(&)[N]);
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

template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
void prn::print(const T(&v)[N0][N1][N2])
{
	auto it{std::ostream_iterator<char>(std::cout)};

	for(std::size_t i{}; i < N0; i++)
	{
		for(std::size_t j{}; j < N1; j++)
		{
			std::fill_n(it, i, '\t');
			print(v[i][j]);
		}
	}
}

template <typename T, std::size_t N1, std::size_t N2>
void prn::print(const T(&v)[N1][N2], std::size_t n0)
{
	auto it{std::ostream_iterator<char>(std::cout)};

	for(std::size_t i{}; i < n0; i++)
	{
		for(std::size_t j{}; j < N1; j++)
		{
			std::fill_n(it, i, '\t');
			printv(v[N1 * i + j], N2);
		}
	}
}

template <typename T, std::size_t N>
void prn::print(const T(&v)[N])
{
	std::for_each(std::cbegin(v), std::cend(v), printx<T>);
	std::cout << std::endl;
}

template <typename T>
void prn::print(const T* v, std::size_t n0, std::size_t n1, std::size_t n2)
{
	auto it{std::ostream_iterator<char>(std::cout)};

	for(std::size_t i{}; i < n0; i++)
	{
		for(std::size_t j{}; j < n1; j++)
		{
			std::fill_n(it, i, '\t');
			printv(v + n2 * (n1 * i + j), n2);
		}
	}
}

template <typename T>
void prn::printv(const T* v, std::size_t n)
{
	std::for_each_n(v, n, printx<T>);
	std::cout << std::endl;
}

template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
decltype(auto) prn::operator << (std::ostream& o, const T(&v)[N0][N1][N2])
{
	for(auto& w: v)
	{
		o << std::endl << w;
	}

	return o;
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
