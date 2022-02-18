#include <array>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <algorithm>

template <size_t size>
using static_string = std::array <char, size>;

template <size_t size, size_t ... index>
constexpr static_string <sizeof ... (index) + 1>
make_static_string(const char (&s)[size])
{
	return { s[index] ..., '\0' };
}

int main(void)
{
	const char hello[]{"hello"};
	constexpr auto s = make_static_string <0, 1, 2, 3, 4> (hello);
	std::copy(s.cbegin(), s.cend(), std::ostream_iterator <char> (std::cout));
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
