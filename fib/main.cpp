#include "fib.hpp"

#include <vector>
#include <cstdlib>
#include <algorithm>

int main(void)
{
	const std::vector <fib::deffn> v
	{
		{ "bine ", fib::bine },
		{ "cycle", fib::cycle },
		{ "recur", fib::recur }
	};

	const auto MAX(30ul);
	std::for_each(v.cbegin(), v.cend(), std::bind(fib::print, std::placeholders::_1, MAX));
	return EXIT_SUCCESS;
}
