#pragma once

#include <iomanip>
#include <iostream>
#include <iterator>

namespace prn
{
	using namespace std;

	const auto width(3);

template <typename T, size_t N0, size_t N1, size_t N2>
	void print(const T(&)[N0][N1][N2]);
template <typename T, size_t N1, size_t N2>
	void print(const T(&)[N1][N2], const size_t);
template <typename T, size_t N>
	void print(const T(&)[N]);
template <typename T>
	void print(const T[], const size_t, const size_t, const size_t);
template <typename T>
	void printv(const T[], const size_t);
template <typename T, size_t N0, size_t N1, size_t N2>
	decltype(auto) operator << (ostream&, const T(&)[N0][N1][N2]);
template <typename T, size_t N0, size_t N1>
	decltype(auto) operator << (ostream&, const T(&)[N0][N1]);
template <typename T, size_t N>
	decltype(auto) operator << (ostream&, const T(&)[N]);
}

template <typename T, size_t N0, size_t N1, size_t N2>
void prn::print(const T(&v)[N0][N1][N2])
{
	auto it { ostream_iterator <char> (cout) };

	for(size_t i{}; i < N0; i++)
	{
		for(size_t j{}; j < N1; j++)
		{
			fill_n(it, i, '\t');
			print(v[i][j]);
		}
	}
}

template <typename T, size_t N1, size_t N2>
void prn::print(const T(&v)[N1][N2], const size_t n0)
{
	auto it { ostream_iterator <char> (cout) };

	for(size_t i{}; i < n0; i++)
	{
		for(size_t j{}; j < N1; j++)
		{
			fill_n(it, i, '\t');
			printv(v[N1 * i + j], N2);
		}
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

template <typename T>
void prn::print(const T v[], const size_t n0, const size_t n1, const size_t n2)
{
	auto it { ostream_iterator <char> (cout) };

	for(size_t i{}; i < n0; i++)
	{
		for(size_t j{}; j < n1; j++)
		{
			fill_n(it, i, '\t');
			printv(v + n2 * (n1 * i + j), n2);
		}
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

template <typename T, size_t N0, size_t N1, size_t N2>
decltype(auto)
prn::operator << (ostream& o, const T(&v)[N0][N1][N2])
{
	for(auto& w: v)
	{
		o << endl << w;
	}
	return o;
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
