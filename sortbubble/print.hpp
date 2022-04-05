#pragma once

#include "generic.hpp"

#include <cmath>
#include <vector>
#include <iostream>
#include <iterator>

namespace gen
{
template <typename T>
	decltype(auto)
	operator << (ostream&, const vector<T>&);
}

template <typename T>
decltype(auto)
gen::operator << (ostream& o, const vector<T> &v)
{
	auto it(ostream_iterator<T>(o, " "));
	if constexpr(is_integral_v<T>)
	{
		copy(v.cbegin(), v.cend(), it);
	}
	else
	{
		transform(v.cbegin(), v.cend(), it,
		[](const T& x)
		-> T
		{
			const auto order(1.e2);
			const auto y(round(x * order));
			const auto z(y / order);
			return z;
		});
	}
	return o;
}

using gen::operator <<;
