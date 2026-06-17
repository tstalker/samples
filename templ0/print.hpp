#pragma once

#include <iostream>
#include <string>

namespace prn
{
	using namespace std::literals::string_literals;

	using type = int;

	void print(const type&);

	template <typename T>
	void print(const T&);

	template <typename... T>
	void print(const type&, const T&...);
}

void print(void);

template <typename T>
void prn::print(const T& x)
{
	std::cout << x;
}

template <typename... T>
void prn::print(const type& x, const T&... y)
{
	print(x);
	print(", "s);
	print(y...);
}

template <typename... T>
void print(const T&... x)
{
	prn::print(x...);
	print();
}
