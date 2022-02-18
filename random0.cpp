#include <array>
#include <random>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <algorithm>

int main(void)
{
	std::array <short, 10> z;
	decltype(z)::value_type i{};
	std::generate(z.begin(), z.end(), [&i]
	{
		return i++;
	});
	std::random_device rd;
	std::mt19937 re(rd());
	std::shuffle(z.begin(), z.end(), re);
	std::copy(z.cbegin(), z.cend(), std::ostream_iterator <decltype(z)::value_type> (std::cout, " "));
	std::cout << std::endl;
	std::sort(z.begin(), z.end());
	std::copy(z.cbegin(), z.cend(), std::ostream_iterator <decltype(z)::value_type> (std::cout, " "));
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
