#include <cstdlib>
#include <iostream>

inline constexpr unsigned mul(const unsigned& u)
{
	return u ? u : 1u;
}

template <typename... T> inline constexpr unsigned mul(const unsigned& u, const T&... t)
{
	return mul(u) * mul(t...);
}

int main(void)
{
	std::cout << mul(0u) << std::endl;
	std::cout << mul(0u, 1u) << std::endl;
	std::cout << mul(0u, 1u, 2u) << std::endl;
	std::cout << mul(0u, 1u, 2u, 3u) << std::endl;
	std::cout << mul(0u, 1u, 2u, 3u, 4u) << std::endl;
	std::cout << mul(0u, 1u, 2u, 3u, 4u, 5u) << std::endl;
	std::cout << mul(0u, 1u, 2u, 3u, 4u, 5u, 6u) << std::endl;
	std::cout << mul(0u, 1u, 2u, 3u, 4u, 5u, 6u, 7u) << std::endl;
	std::cout << mul(0u, 1u, 2u, 3u, 4u, 5u, 6u, 7u, 8u) << std::endl;
	std::cout << mul(0u, 1u, 2u, 3u, 4u, 5u, 6u, 7u, 8u, 9u) << std::endl;
	return EXIT_SUCCESS;
}
