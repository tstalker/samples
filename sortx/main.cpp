#include "print.hpp"

#include <numeric>

int main(void)
{
	int v[10]{};
	std::iota(std::begin(v), std::end(v), std::remove_extent_t<decltype(v)>());
	std::cout << v << std::endl;
	std::reverse(std::begin(v), std::end(v));
	std::cout << v << std::endl;
	std::sort(std::begin(v), std::end(v));
	std::cout << v << std::endl;
	return EXIT_SUCCESS;
}
