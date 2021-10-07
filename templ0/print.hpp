#ifdef PRINT_HPP
#error Redefined header print.hpp
#endif

#define PRINT_HPP

#include <iomanip>
#include <iostream>
#include <iterator>
#include <algorithm>

namespace prn
{
	using namespace std;
template <typename T, size_t N>
	using type = const T(&)[N];

template <typename T, size_t N>
	void print(type <T, N>);
}

template <typename T, size_t N>
void prn::print(type <T, N> x)
{
	cout << showpoint << setprecision(2);
	copy(cbegin(x), cend(x), ostream_iterator <T> (cout, " "));
	cout << endl;
}
