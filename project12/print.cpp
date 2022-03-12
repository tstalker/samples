#include "header.hpp"

#include <iostream>
#include <iterator>

void print(const std::vector<type> &v)
{
	auto it(std::ostream_iterator<std::remove_reference_t<decltype(v)>::value_type>(std::cout, " "));
	std::copy(v.cbegin(), v.cend(), it);
	std::cout << std::endl;
}
