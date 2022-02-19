#pragma once

#include <iostream>
#include <iterator>

namespace prn
{
	using namespace std;

template <typename T, size_t N>
	void print(const T(&)[N]);
template <typename T>
	void print(const T[], const size_t);
template <typename T>
	void print(const initializer_list<T>&);
template <typename T, size_t N>
	decltype(auto) operator << (ostream&, const T(&)[N]);
template <typename T>
	decltype(auto) operator << (ostream&, const initializer_list<T>&);
}

template <typename T>
void prn::print(const T v[], const size_t n)
{
	auto it(ostream_iterator<T>(cout, " "));
	copy_n(v, n, it);
	cout << endl;
}

template <typename T, size_t N>
void prn::print(const T(&v)[N])
{
	auto it(ostream_iterator<T>(cout, " "));
	copy(cbegin(v), cend(v), it);
	cout << endl;
}

template <typename T>
void prn::print(const initializer_list<T> &v)
{
	auto it(ostream_iterator<T>(cout, " "));
	copy(v.begin(), v.end(), it);
	cout << endl;
}

template <typename T, size_t N>
decltype(auto)
prn::operator << (ostream& o, const T(&v)[N])
{
	auto it(ostream_iterator<T>(o, " "));
	copy(cbegin(v), cend(v), it);
	o << endl;
	return o;
}

template <typename T>
decltype(auto)
prn::operator << (ostream& o, const initializer_list<T> &v)
{
	auto it(ostream_iterator<T>(o, " "));
	copy(v.begin(), v.end(), it);
	o << endl;
	return o;
}

using prn::operator <<;
