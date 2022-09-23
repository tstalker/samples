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
	using namespace std;

template <typename T>
	auto sum0(const T&, const T&);
template <typename... T>
	auto sum1(const T&...);
}

template <typename T>
auto
gen::sum0(
	const T& a,
	const T& b)
{
	const auto r(a + b);
	cout << a << " + " << b << " -> " << r << endl;
	return r;
}

template <typename... T>
auto
gen::sum1(
	const T&... x)
{
	([](const auto& x)
	{
		cout << x << ' ';
	}
	(x), ...);
	return (x + ...);
}
