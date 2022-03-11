#pragma once

#include <iostream>
#include <iterator>

namespace prn
{
	using namespace std;

template<class T>
	enable_if_t<rank_v<T> == 1>
	print(const T&);
}

template<class T>
auto
prn::print(const T& v)
-> enable_if_t<rank_v<T> == 1>
{
	auto it(ostream_iterator<remove_extent_t<T>>(cout, " "));
	copy_n(v, extent_v<T>, it);
	cout << endl;
}
