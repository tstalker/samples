#include <array>
#include <random>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>

using type = int;

int main(void)
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution ud(0, 9);
	auto dice(std::bind(ud, mt));
	std::array <type, 10> z;
	std::generate(std::begin(z), std::end(z), dice);

	for(size_t i{}; i < z.size(); i++)
		std::cout << z[i] << ' ';
	std::cout << std::endl;

	for(auto it(std::cbegin(z)); it != std::cend(z); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	for(const auto& x: z)
		std::cout << x << ' ';
	std::cout << std::endl;

	std::copy(std::cbegin(z), std::cend(z), std::ostream_iterator <type> (std::cout, " "));
	std::cout << std::endl;

	std::for_each(std::cbegin(z), std::cend(z), [](const type& x)
	{
		std::cout << x << ' ';
	});
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
