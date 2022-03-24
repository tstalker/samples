#include "header.hpp"

#include <numeric>

/*
свёртка параметров шаблона
accumulate
convolution
fold
reduce
*/

int main(void)
{
	const std::size_t SZ(10);
	int v[SZ]{};
	using TV = std::remove_extent_t<decltype(v)>;
	std::iota(std::begin(v), std::end(v), TV());
	std::cout << std::accumulate(std::cbegin(v), std::cend(v), TV(), gen::sum0<TV>) << std::endl;
	std::cout << std::accumulate(std::crbegin(v), std::crend(v), TV(), gen::sum0<TV>) << std::endl;
	std::cout << gen::sum1(0, 1, 2, 3, 4, 5, 6, 7, 8, 9) << std::endl;
	return EXIT_SUCCESS;
}
