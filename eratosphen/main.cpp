#include <vector>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>

int main(void)
{
	const size_t MAX(10000);
	std::vector<unsigned> v;
	std::generate_n(std::back_inserter(v), MAX,
		[i(0)](void) mutable
		{
			return i++;
		});
	for(const auto& x: v)
	{
		if(x < 2)
			continue;
		for(size_t i(2 * x); i < v.size(); i += x)
			v[i] = 0;
	}
	std::copy_if(v.cbegin(), v.cend(),
		std::ostream_iterator<decltype(v)::value_type>(std::cout, " "),
		std::bind(std::not_equal_to<decltype(v)::value_type>(), std::placeholders::_1, 0));
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
