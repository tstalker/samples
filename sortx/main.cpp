#include "print.hpp"

#include <cstdlib>
#include <numeric>

int main(void)
{
	int v[10];
	std::iota(std::begin(v), std::end(v), 0);
	std::cout << v << std::endl;
	std::reverse(std::begin(v), std::end(v));
	std::cout << v << std::endl;
	std::sort(std::begin(v), std::end(v));
	std::cout << v << std::endl;
	return EXIT_SUCCESS;
}
