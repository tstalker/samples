#pragma once

#include <iomanip>
#include <iostream>
#include <string>

using namespace std::literals::string_literals;

constexpr auto operator ""_h(const unsigned long long x)
{
	return static_cast<short>(x);
}

constexpr auto operator ""_s(const char* s, std::size_t n)
{
	return std::string(s, n);
}

namespace prn
{
	template <typename T>
	void print(const T&);
	template <>
	void print<bool>(const bool&);

	template <typename T, typename... U>
	void print(const T&, const U&...);
}

template <typename T>
void prn::print(const T& x)
{
	std::cout << x;
}

template <typename T, typename... U>
void prn::print(const T& x, const U&... y)
{
	print(x);
	print(", "s);
	print(y...);
}

void print(void);

template <typename... T>
void print(const T&... x)
{
	prn::print(x...);
	print();
}
