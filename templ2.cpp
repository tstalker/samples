#include <cstdlib>
#include <iostream>

inline int sum(const int& t)
{
	return t;
}

template <typename... T> inline int sum(const int& x, const T&... t)
{
	return sum(x) + sum(t...);
}

int main(void)
{
	std::cout << sum(0) << std::endl;
	std::cout << sum(0, 1) << std::endl;
	std::cout << sum(0, 1, 2) << std::endl;
	std::cout << sum(0, 1, 2, 3) << std::endl;
	std::cout << sum(0, 1, 2, 3, 4) << std::endl;
	std::cout << sum(0, 1, 2, 3, 4, 5) << std::endl;
	std::cout << sum(0, 1, 2, 3, 4, 5, 6) << std::endl;
	std::cout << sum(0, 1, 2, 3, 4, 5, 6, 7) << std::endl;
	std::cout << sum(0, 1, 2, 3, 4, 5, 6, 7, 8) << std::endl;
	std::cout << sum(0, 1, 2, 3, 4, 5, 6, 7, 8, 9) << std::endl;
	return EXIT_SUCCESS;
}
