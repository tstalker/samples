#include <numeric>
#include <iostream>
#include <iterator>

int main(void)
{
	int v[10]{};
	using TV = std::remove_extent_t<decltype(v)>;
	std::iota(std::begin(v), std::end(v), TV());
	auto it(std::ostream_iterator<TV>(cout, " "));
	std::copy(std::cbegin(v), std::cend(v), it);
	std::cout << std::endl;
	std::reverse(std::begin(v), std::end(v));
	std::copy(std::cbegin(v), std::cend(v), it);
	std::cout << std::endl;
	std::sort(std::begin(v), std::end(v));
	std::copy(std::cbegin(v), std::cend(v), it);
	std::cout << std::endl;
}
