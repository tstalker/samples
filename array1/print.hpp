#pragma once

#include <iomanip>
#include <iostream>
#include <functional>

namespace prn
{
	using namespace std;

	const auto width(3);

template <typename T, size_t N0, size_t N1>
	void print(const T(&)[N0][N1]);
template <typename T, size_t N>
	void print(const T(&)[N]);
template <typename T, size_t N1>
	void print(const T(&)[N1], const size_t);
template <typename T>
	void print(const T[], const size_t, const size_t);
template <typename T>
	void printv(const T[], const size_t);
template <typename T, size_t N0, size_t N1>
	decltype(auto) operator << (ostream&, const T(&)[N0][N1]);
template <typename T, size_t N>
	decltype(auto) operator << (ostream&, const T(&)[N]);
}

template <typename T, size_t N0, size_t N1>
void prn::print(const T(&v)[N0][N1])
{
	for(auto& w: v)
	{
		print(w);
	}
}

template <typename T, size_t N>
void prn::print(const T(&v)[N])
{
	for(auto& x: v)
	{
		cout << setw(width) << x;
	}
	cout << endl;
}

template <typename T, size_t N1>
void prn::print(const T(&v)[N1], const size_t n0)
{
	for(size_t i{}; i < n0; i++)
	{
		printv(v + N1 * i, N1);
	}
}

template <typename T>
void prn::print(const T v[], const size_t n0, const size_t n1)
{
	for(size_t i{}; i < n0; i++)
	{
		printv(v + n1 * i, n1);
	}
}

template <typename T>
void prn::printv(const T v[], const size_t n)
{
	for_each_n(v, n, [](auto& x)
	{
		cout << setw(width) << x;
	});
	cout << endl;
}

template <typename T, size_t N0, size_t N1>
decltype(auto)
prn::operator << (ostream& o, const T(&v)[N0][N1])
{
	for(auto& w: v)
	{
		o << w;
	}
	return o;
}

template <typename T, size_t N>
decltype(auto)
prn::operator << (ostream& o, const T(&v)[N])
{
	for(auto& x: v)
	{
		o << setw(width) << x;
	}
	o << endl;
	return o;
}

using prn::operator <<;
