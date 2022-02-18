#include <array>
#include <random>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>

int main(void)
{
	std::random_device rd;
	std::mt19937 mt(rd());
	const auto MAX(10);
	std::uniform_int_distribution ud(0, MAX - 1);
	auto dice(std::bind(ud, mt));
	std::array <int, MAX> z;

	for(auto it(z.begin()); it != z.end(); it++)
	{
		decltype(z)::value_type x;
		do
			x = dice();
		while(std::find(z.begin(), it, x) != it);
		*it = x;
	}

	std::copy(z.cbegin(), z.cend(), std::ostream_iterator <decltype(z)::value_type> (std::cout, " "));
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
