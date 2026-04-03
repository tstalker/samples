#include "generic.hpp"

#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

const gen::type MAX(10000);

int main(void)
{
	std::vector<gen::type> v(MAX);
	std::iota(v.begin(), v.end(), gen::type());

	for(const auto& x: v)
	{
		if(x < 2)
		{
			continue;
		}

		for(std::size_t i(2 * x); i < v.size(); i += x)
		{
			v[i] = gen::type();
		}
	}

	std::vector<gen::type> w;
	auto fn(std::bind(std::not_equal_to<gen::type>(), std::placeholders::_1, gen::type()));
	std::copy_if(v.cbegin(), v.cend(), std::back_inserter(w), fn);
	auto it(std::ostream_iterator<gen::type>(std::cout, " "));
	std::copy(w.cbegin(), w.cend(), it);
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
