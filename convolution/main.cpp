#include <numeric>
#include <iostream>

/*
свёртка параметров шаблона
accumulate
convolution
fold
reduce
*/

template <typename T> T sum0(const T& a, const T& b)
{
	const auto r(a + b);
	std::cout << '[' << a << ", " << b << "] -> " << r << std::endl;
	return r;
}

template <typename... T> auto sum1(const T&... x)
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
	const int z[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	using TZ = std::remove_extent_t <decltype(z)>;
	std::cout << std::accumulate(std::cbegin(z), std::cend(z), TZ(), sum0 <TZ>) << std::endl;
	std::cout << std::accumulate(std::crbegin(z), std::crend(z), TZ(), sum0 <TZ>) << std::endl;
	std::cout << sum1(0, 1, 2, 3, 4, 5, 6, 7, 8, 9) << std::endl;
}
