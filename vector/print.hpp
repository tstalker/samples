#pragma once

#include <vector>
#include <iostream>
#include <iterator>

namespace prn
{
	using namespace std;

template <typename T>
	void print(const vector<T>&);
}

template <typename T>
void prn::print(const vector<T> &v)
{
	auto it(ostream_iterator<T>(cout, " "));
	copy(v.cbegin(), v.cend(), it);
	cout << endl;
}
