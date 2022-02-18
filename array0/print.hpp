#pragma once

#include <iomanip>
#include <iostream>

namespace prn
{
	using namespace std;

	const auto width(2);

template <typename T, size_t N>
	void print(const T(&)[N]);
template <typename T>
	void print(const initializer_list <T> &);
template <typename T, size_t N>
	decltype(auto) operator << (ostream&, const T(&)[N]);
template <typename T>
	decltype(auto) operator << (ostream&, const initializer_list <T> &);
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
void prn::print(const initializer_list <T> &v)
{
	for(auto& x: v)
	{
		cout << setw(width) << x;
	}
	cout << endl;
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

template <typename T>
decltype(auto)
prn::operator << (ostream& o, const initializer_list <T> &v)
{
	for(auto& x: v)
	{
		o << setw(width) << x;
	}
	o << endl;
	return o;
}

using prn::operator <<;
