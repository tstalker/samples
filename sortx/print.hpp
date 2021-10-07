#ifdef PRINT_HPP
#error Redefined header print.hpp
#endif

#define PRINT_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T, size_t N>
decltype(auto) operator << (std::ostream& o, const T(&v)[N])
{
	std::copy(std::cbegin(v), std::cend(v), std::ostream_iterator <T> (o, " "));
	return o;
}
