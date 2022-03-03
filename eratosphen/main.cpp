#include <vector>
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
		{
			continue;
		}
		for(size_t i(2 * x); i < v.size(); i += x)
		{
			v[i] = 0;
		}
	}

	std::vector<unsigned> w;
	auto fn(std::bind(std::not_equal_to<decltype(v)::value_type>(), std::placeholders::_1, 0));
	std::copy_if(v.cbegin(), v.cend(), std::back_inserter(w), fn);
	auto it(std::ostream_iterator<decltype(w)::value_type>(std::cout, " "));
	std::copy(w.cbegin(), w.cend(), it);
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
