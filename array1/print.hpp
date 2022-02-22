#pragma once

#include <iomanip>
#include <iostream>
#include <functional>

namespace prn
{
	using namespace std;

template <typename T, size_t N0, size_t N1>
	void print(const T(&)[N0][N1]);
template <typename T, size_t N>
	void print(const T(&)[N]);
template <typename T, size_t N1>
	void print(const T(&)[N1], const size_t);
template <typename T>
	void print(const T[], const size_t, const size_t);
template <typename T>
	void printx(const T&);
template <typename T>
	void printy(ostream&, const T&);
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
	for_each(cbegin(v), cend(v), printx<T>);
	cout << endl;
}

template <typename T>
void prn::printx(const T& x)
{
	printy(cout, x);
}

template <typename T>
void prn::printy(ostream& o, const T& x)
{
	o << setw(3) << x;
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
	for_each_n(v, n, printx<T>);
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
	auto f(bind(printy<T>, ref(o), placeholders::_1));
	for_each(cbegin(v), cend(v), f);
	o << endl;
	return o;
}

using prn::operator <<;
