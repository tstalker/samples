#include <array>
#include <random>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <iostream>
#include <iterator>
#include <algorithm>

using type = int;

int main(void)
{
	std::random_device rd;
	std::mt19937 mt(rd());
	const size_t MAX(10);

	type z[MAX];
	std::iota(std::begin(z), std::end(z), type());
	std::shuffle(std::begin(z), std::end(z), mt);
	std::copy(std::cbegin(z), std::cend(z), std::ostream_iterator <std::remove_all_extents_t <decltype(z)>> (std::cout, " "));
	std::cout << std::endl;
	std::sort(std::begin(z), std::end(z));
	std::copy(std::cbegin(z), std::cend(z), std::ostream_iterator <std::remove_all_extents_t <decltype(z)>> (std::cout, " "));
	std::cout << std::endl << std::endl;

	std::vector <type> v;
	for(size_t i{}; i < MAX; i++)
	{
		v.push_back(i);
	}
	std::shuffle(v.begin(), v.end(), mt);
	std::copy(v.cbegin(), v.cend(), std::ostream_iterator <decltype(v)::value_type> (std::cout, " "));
	std::cout << std::endl;
	std::sort(v.begin(), v.end());
	std::copy(v.cbegin(), v.cend(), std::ostream_iterator <decltype(v)::value_type> (std::cout, " "));
	std::cout << std::endl << std::endl;

	std::array <type, MAX> a;
	std::iota(a.begin(), a.end(), type());
	std::shuffle(a.begin(), a.end(), mt);
	std::copy(a.cbegin(), a.cend(), std::ostream_iterator <decltype(a)::value_type> (std::cout, " "));
	std::cout << std::endl;
	std::sort(a.begin(), a.end());
	std::copy(a.cbegin(), a.cend(), std::ostream_iterator <decltype(a)::value_type> (std::cout, " "));
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
