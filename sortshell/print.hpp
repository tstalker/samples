#pragma once

#include <cmath>
#include <vector>
#include <iostream>
#include <iterator>

namespace gen
{
template <typename T>
	decltype(auto) operator << (std::ostream&, const std::vector<T>&);
}

template <typename T>
decltype(auto) gen::operator << (std::ostream& o, const std::vector<T> &v)
{
	auto it(std::ostream_iterator<T>(o, " "));
	if constexpr(std::is_integral_v<T>)
	{
		std::copy(v.cbegin(), v.cend(), it);
	}
	else
	{
		std::transform(v.cbegin(), v.cend(), it,
		[](const T& x)
		-> T
		{
			const auto order(1.e2);
			const auto y(std::round(x * order));
			const auto z(y / order);
			return z;
		});
	}
	return o;
}

using gen::operator <<;
