#ifdef PRINT_HPP
#error Redefined header print.hpp
#endif

#define PRINT_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <initializer_list>

namespace prn
{
	using namespace std;

template <typename T, size_t N>
	void print(const T(&)[N]);

template <typename T, size_t N>
	decltype(auto) operator << (ostream&, const T(&)[N]);

template <typename T>
	decltype(auto) operator << (ostream&, const initializer_list <T> &);
}

template <typename T, size_t N>
void prn::print(const T(&v)[N])
{
	cout << v << endl;
}

template <typename T, size_t N>
decltype(auto) prn::operator << (ostream& o, const T(&v)[N])
{
	copy(cbegin(v), cend(v), ostream_iterator <T> (o, " "));
	return o;
}

template <typename T>
decltype(auto) prn::operator << (ostream& o, const initializer_list <T> &v)
{
	copy(v.begin(), v.end(), ostream_iterator <T> (o, " "));
	return o;
}

using prn::operator <<;
