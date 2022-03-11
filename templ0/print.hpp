#pragma once

#include <iomanip>
#include <iostream>
#include <iterator>

namespace prn
{
	using namespace std;

template <typename T, size_t N>
	using type = const T(&)[N];

template <typename T, size_t N>
	void print(type<T, N>);
}

template <typename T, size_t N>
void prn::print(type<T, N> x)
{
	cout << showpoint << setprecision(2);
	auto it(ostream_iterator<T>(cout, " "));
	copy(cbegin(x), cend(x), it);
	cout << endl;
}
