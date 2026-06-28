#pragma once

#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <ranges>

namespace prn
{
	constexpr auto TAB('\t');

	extern std::size_t count_tab;

template <typename T>
	void print_elem(const T&);
template <typename T>
	void print_elem_os(std::ostream&, const T&);
template <typename T>
	void print_line(const T[], std::size_t);
template <typename T>
	void print_line(std::span<T>);
template <typename T>
	void print(const T[], std::size_t, std::size_t, std::size_t);
template <typename T, std::size_t N>
	void print(const T(&)[N]);
template <typename T, std::size_t N1, std::size_t N2>
	void print(const T(&)[N1][N2], std::size_t);
template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
	void print(const T(&)[N0][N1][N2]);

template <typename T, std::size_t N>
	decltype(auto) operator <<(std::ostream&, const T(&)[N]);
template <typename T, std::size_t N0, std::size_t N1>
	decltype(auto) operator <<(std::ostream&, const T(&)[N0][N1]);
template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
	decltype(auto) operator <<(std::ostream&, const T(&)[N0][N1][N2]);
template <typename T>
	decltype(auto) operator <<(std::ostream&, std::span<T>);
}

template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
void prn::print(const T(&src)[N0][N1][N2])
{
	std::ostream_iterator<decltype(TAB)> it(std::cout);
	for(std::size_t i{}; i < N0; i++)
	{
		for(std::size_t j{}; j < N1; j++)
		{
			std::fill_n(it, i, TAB);
			print(src[i][j]);
		}
	}
}

template <typename T, std::size_t N1, std::size_t N2>
void prn::print(const T(&src)[N1][N2], std::size_t n0)
{
	std::ostream_iterator<decltype(TAB)> it(std::cout);
	for(std::size_t i{}; i < n0; i++)
	{
		for(std::size_t j{}; j < N1; j++)
		{
			std::fill_n(it, i, TAB);
			print_line(src[N1 * i + j], N2);
		}
	}
}

template <typename T, std::size_t N>
void prn::print(const T(&src)[N])
{
	std::span pool(std::ranges::cbegin(src), std::ranges::cend(src));
	print_line(pool);
}

template <typename T>
void prn::print(const T src[], std::size_t n0, std::size_t n1, std::size_t n2)
{
	std::ostream_iterator<decltype(TAB)> it(std::cout);
	for(std::size_t i{}; i < n0; i++)
	{
		for(std::size_t j{}; j < n1; j++)
		{
			std::fill_n(it, i, TAB);
			print_line(src + n2 * (n1 * i + j), n2);
		}
	}
}

template <typename T>
void prn::print_line(const T src[], std::size_t count)
{
	std::span pool(src, count);
	print_line(pool);
}

template <typename T>
void prn::print_line(std::span<T> pool)
{
	std::ranges::for_each(pool, print_elem<T>);
	std::cout << std::endl;
}

template <typename T>
void prn::print_elem(const T& elem)
{
	print_elem_os(std::cout, elem);
}

template <typename T>
void prn::print_elem_os(std::ostream& os, const T& elem)
{
	os << std::setw(3) << elem;
}

template <typename T, std::size_t N0, std::size_t N1, std::size_t N2>
decltype(auto) prn::operator <<(std::ostream& os, const T(&src)[N0][N1][N2])
{
	count_tab = {};
	for(auto& rectangle: src)
	{
		os << rectangle;
		count_tab++;
	}
	count_tab = {};
	return os;
}

template <typename T, std::size_t N0, std::size_t N1>
decltype(auto) prn::operator <<(std::ostream& os, const T(&src)[N0][N1])
{
	for(auto& line: src)
	{
		os << line;
	}
	return os;
}

template <typename T, std::size_t N>
decltype(auto) prn::operator <<(std::ostream& os, const T(&src)[N])
{
	std::ostream_iterator<decltype(TAB)> it(os);
	std::fill_n(it, count_tab, TAB);
	std::span pool(std::ranges::cbegin(src), std::ranges::cend(src));
	os << pool;
	return os;
}

template <typename T>
decltype(auto) prn::operator <<(std::ostream& os, std::span<T> pool)
{
	auto fn(std::bind(print_elem_os<T>, std::ref(os), std::placeholders::_1));
	std::ranges::for_each(pool, fn);
	os << std::endl;
	return os;
}

using prn::operator <<;
