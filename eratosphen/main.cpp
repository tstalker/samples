#include <vector>
#include <iostream>
#include <iterator>
#include <functional>

using type = unsigned;

const std::size_t MAX(10000);

int main(void)
{
	std::vector<type> v;
	std::generate_n(std::back_inserter(v), MAX,
	[i{type()}](void) mutable
	{
		return i++;
	});

	for(const auto& x: v)
	{
		if(x < 2)
		{
			continue;
		}
		for(std::size_t i(2 * x); i < v.size(); i += x)
		{
			v[i] = type();
		}
	}

	std::vector<type> w;
	auto fn(std::bind(std::not_equal_to<decltype(v)::value_type>(), std::placeholders::_1, type()));
	std::copy_if(v.cbegin(), v.cend(), std::back_inserter(w), fn);
	auto it(std::ostream_iterator<decltype(w)::value_type>(std::cout, " "));
	std::copy(w.cbegin(), w.cend(), it);
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
