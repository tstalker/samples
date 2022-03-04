#pragma once

#include <iostream>
#include <iterator>

namespace prn
{
	using namespace std;

template <typename T, size_t N>
	decltype(auto)
	operator << (ostream&, const T(&)[N]);
}

template <typename T, size_t N>
decltype(auto)
prn::operator << (ostream& o, const T(&v)[N])
{
	auto it(ostream_iterator<T>(o, " "));
	copy(cbegin(v), cend(v), it);
	return o;
}

using prn::operator <<;
