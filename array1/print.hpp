#ifdef PRINT_HPP
#error Redefined header print.hpp
#endif

#define PRINT_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>

namespace prn
{
	using namespace std;

template <typename T, size_t N0, size_t N1>
	void print(const T(&)[N0][N1]);
template <typename T, size_t N1>
	void print(const T(&)[N1], const size_t);
template <typename T>
	void printv(const T[], const size_t);
}

template <typename T, size_t N0, size_t N1>
void prn::print(const T(&v)[N0][N1])
{
	auto f(bind(printv <T>, placeholders::_1, N1));
	for_each_n(v, N0, f);
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
void prn::printv(const T v[], const size_t n)
{
	copy_n(v, n, ostream_iterator <T> (cout, " "));
	cout << endl;
}
