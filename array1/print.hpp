#pragma once

#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <ranges>

namespace prn
{
template <typename T, std::size_t N0, std::size_t N1>
	void print(const T(&)[N0][N1]);
template <typename T, std::size_t N>
	void print(const T(&)[N]);
template <typename T, std::size_t N1>
	void print(const T(&)[N1], std::size_t);
template <typename T>
	void print(const T[], std::size_t, std::size_t);
template <typename T>
	void print_elem(const T&);
template <typename T>
	void print_elem_os(std::ostream&, const T&);
template <typename T>
	void print_line(const T[], std::size_t);

template <typename T, std::size_t N>
	decltype(auto) operator <<(std::ostream&, const T(&)[N]);
template <typename T, std::size_t N0, std::size_t N1>
	decltype(auto) operator <<(std::ostream&, const T(&)[N0][N1]);
}

template <typename T, std::size_t N0, std::size_t N1>
void prn::print(const T(&src)[N0][N1])
{
	for(auto& line : src)
	{
		print(line);
	}
}

template <typename T, std::size_t N>
void prn::print(const T(&src)[N])
{
	std::span pool(std::ranges::cbegin(src), std::ranges::cend(src));
	std::ranges::for_each(pool, print_elem<T>);
	std::cout << std::endl;
}

template <typename T, std::size_t N1>
void prn::print(const T(&src)[N1], std::size_t n0)
{
	for(std::size_t i{}; i < n0; i++)
	{
		print_line(src + N1 * i, N1);
	}
}

template <typename T>
void prn::print(const T src[], std::size_t n0, std::size_t n1)
{
	for(std::size_t i{}; i < n0; i++)
	{
		print_line(src + n1 * i, n1);
	}
}

template <typename T>
void prn::print_line(const T src[], std::size_t count)
{
	std::span pool(src, count);
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
	std::span pool(std::ranges::cbegin(src), std::ranges::cend(src));
	auto fn(std::bind(print_elem_os<T>, std::ref(os), std::placeholders::_1));
	std::ranges::for_each(pool, fn);
	os << std::endl;
	return os;
}

using prn::operator <<;
