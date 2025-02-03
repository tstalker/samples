#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>

namespace prn
{
template <typename T, std::size_t N>
	using type = T(&)[N];

template <typename T, std::size_t N>
	decltype(auto) operator << (std::ostream&, const type<T, N>);
}

template <typename T, std::size_t N>
decltype(auto) prn::operator << (std::ostream& o, const type<T, N> v)
{
	auto it(std::ostream_iterator<T>(o, " "));
	std::copy(std::cbegin(v), std::cend(v), it);
	return o;
}

using prn::operator <<;
