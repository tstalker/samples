#pragma once

#include <iostream>

namespace prn
{
	inline void print(void)
	{
		std::cout << std::endl;
	}

	inline void print(const auto& t)
	{
		std::cout << t << std::endl;
	}

template <typename T, typename...U>
	void print(const T&, const U&...);
}

template <typename T, typename...U>
void prn::print(const T& t, const U&...u)
{
	std::cout << t << ", ";
	print(u...);
}

template <typename...T>
void print(const T&...t)
{
	prn::print(t...);
}
