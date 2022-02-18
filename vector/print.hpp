#ifdef PRINT_HPP
#error Redefined header print.hpp
#endif

#define PRINT_HPP

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

namespace prn
{
	using namespace std;

template <typename T>
	void print(const vector <T> &);
}

template <typename T>
void prn::print(const vector <T> &v)
{
	copy(v.cbegin(), v.cend(), ostream_iterator <T> (cout, " "));
	cout << endl;
}
