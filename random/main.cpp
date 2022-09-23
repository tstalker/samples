#include <array>
#include <random>
#include <numeric>
#include <iostream>
#include <iterator>

int
main(void)
{
	std::array <short, 10> z;
	std::iota(z.begin(), z.end(), decltype(z)::value_type());
	std::random_device rd;
	std::mt19937 re(rd());
	std::shuffle(z.begin(), z.end(), re);
	auto it(std::ostream_iterator<decltype(z)::value_type>(std::cout, " "));
	std::copy(z.cbegin(), z.cend(), it);
	std::cout << std::endl;
	std::sort(z.begin(), z.end());
	std::copy(z.cbegin(), z.cend(), it);
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
