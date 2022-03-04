#pragma once

#include <iostream>

namespace prn
{
	using namespace std;

	inline void print(void)
	{
		cout << endl;
	}

	inline void print(const auto& t)
	{
		cout << t << endl;
	}

template <typename T, typename...U>
	void print(const T&, const U&...);
}

template <typename T, typename...U>
void prn::print(const T& t, const U&...u)
{
	cout << t << ", ";
	print(u...);
}

template <typename...T>
void print(const T&...t)
{
	prn::print(t...);
}
