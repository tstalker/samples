#include "header.hpp"

#include <iostream>
#include <iterator>
#include <algorithm>

void print(const type* p, const size_t n)
{
	std::copy_n(p, n, std::ostream_iterator <std::remove_pointer_t<decltype(p)>> (std::cout, " "));
	std::cout << std::endl;
}
