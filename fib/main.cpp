#include "fib.hpp"

#include <vector>
#include <algorithm>

int main(void)
{
	const std::vector<fib::deffn> v
	{
		{ "bine ", fib::bine },
		{ "cycle", fib::cycle },
		{ "recur", fib::recur }
	};
	const auto MAX(30ul);
	auto fn(std::bind(fib::print, std::placeholders::_1, MAX));
	std::for_each(v.cbegin(), v.cend(), fn);
	return EXIT_SUCCESS;
}
