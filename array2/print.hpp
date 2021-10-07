#ifdef PRINT_HPP
#error Redefined header print.hpp
#endif

#define PRINT_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

namespace prn
{
	using namespace std;

template <typename T, size_t N0, size_t N1, size_t N2>
	void print(const T(&)[N0][N1][N2]);
template <typename T, size_t N1, size_t N2>
	void print(const T(&)[N1][N2], const size_t);
template <typename T>
	void printv(const T[], const size_t);
template <typename T>
	void print(const T[], const size_t, const size_t, const size_t);
}

template <typename T, size_t N0, size_t N1, size_t N2>
void prn::print(const T(&v)[N0][N1][N2])
{
	for(size_t i{}; i < N0; i++)
		for(size_t j{}; j < N1; j++)
	{
		fill_n(ostream_iterator <char> (cout), i, '\t');
		printv(v[i][j], N2);
	}
}

template <typename T, size_t N1, size_t N2>
void prn::print(const T(&v)[N1][N2], const size_t n0)
{
	for(size_t i{}; i < n0; i++)
		for(size_t j{}; j < N1; j++)
	{
		fill_n(ostream_iterator <char> (cout), i, '\t');
		printv(v[i * N1 + j], N2);
	}
}

template <typename T>
void prn::print(const T v[], const size_t n0, const size_t n1, const size_t n2)
{
	for(size_t i{}; i < n0; i++)
		for(size_t j{}; j < n1; j++)
	{
		fill_n(ostream_iterator <char> (cout), i, '\t');
		printv(v + (i * n1 + j) * n2, n2);
	}
}

template <typename T>
void prn::printv(const T v[], const size_t n)
{
	copy_n(v, n, ostream_iterator <T> (cout, " "));
	cout << endl;
}
