#pragma once

#include <iostream>

/*
свёртка параметров шаблона
accumulate
convolution
fold
reduce
*/

namespace gen
{
template <typename T>
	auto sum0(const T&, const T&);
template <typename... T>
	auto sum1(const T&...);
}

template <typename T>
auto gen::sum0(const T& a, const T& b)
{
	const auto r(a + b);
	std::cout << a << " + " << b << " -> " << r << std::endl;
	return r;
}

template <typename... T>
auto gen::sum1(const T&... x)
{
	([](const auto& x)
	{
		std::cout << x << ' ';
	}
	(x), ...);
	return (x + ...);
}
