#include <numeric>
#include <iostream>

/*
свёртка параметров шаблона
accumulate
convolution
fold
reduce
*/

template <typename T>
T sum0(const T& a, const T& b)
{
	const auto r(a + b);
	std::cout << a << " + " << b << " -> " << r << std::endl;
	return r;
}

template <typename... T>
auto sum1(const T&... x)
{
	([](const auto& x)
	{
		std::cout << x << ' ';
	}
	(x), ...);
	return (x + ...);
}

int main(void)
{
	const int v[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	using TV = std::remove_extent_t<decltype(v)>;
	std::cout << std::accumulate(std::cbegin(v), std::cend(v), TV(), sum0<TV>) << std::endl;
	std::cout << std::accumulate(std::crbegin(v), std::crend(v), TV(), sum0<TV>) << std::endl;
	std::cout << sum1(0, 1, 2, 3, 4, 5, 6, 7, 8, 9) << std::endl;
	return EXIT_SUCCESS;
}
