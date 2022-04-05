#include <vector>
#include <numeric>
#include <iostream>
#include <iterator>
#include <functional>

const std::size_t MAX(10000);

int main(void)
{
	std::vector<unsigned> v(MAX);
	std::iota(v.begin(), v.end(), unsigned());

	for(const auto& x: v)
	{
		if(x < 2)
		{
			continue;
		}
		for(std::size_t i(2 * x); i < v.size(); i += x)
		{
			v[i] = unsigned();
		}
	}

	std::vector<unsigned> w;
	auto fn(std::bind(std::not_equal_to<unsigned>(), std::placeholders::_1, unsigned()));
	std::copy_if(v.cbegin(), v.cend(), std::back_inserter(w), fn);
	auto it(std::ostream_iterator<unsigned>(std::cout, " "));
	std::copy(w.cbegin(), w.cend(), it);
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
