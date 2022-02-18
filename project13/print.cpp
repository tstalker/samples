#include "header.hpp"

#include <iostream>
#include <iterator>
#include <algorithm>

void print(const std::array <type, MAX> &v)
{
	std::copy(v.cbegin(), v.cend(), std::ostream_iterator <std::remove_reference_t<decltype(v)>::value_type> (std::cout, " "));
	std::cout << std::endl;
}
