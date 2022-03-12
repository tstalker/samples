#include "header.hpp"

#include <iostream>
#include <iterator>

void print(const type* p, const std::size_t n)
{
	auto it(std::ostream_iterator<type>(std::cout, " "));
	std::copy_n(p, n, it);
	std::cout << std::endl;
}
