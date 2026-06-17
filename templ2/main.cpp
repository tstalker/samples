#include <iomanip>
#include <iostream>

template <typename T>
auto sum(const T x)
{
	return x;
}

template <typename T, typename... U>
auto sum(const T x, const U... y)
{
	return sum(x) + sum(y...);
}

template <typename T>
auto mul(const T x)
{
	return x;
}

template <typename T, typename... U>
auto mul(const T x, const U... y)
{
	return mul(x) * mul(y...);
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
	std::cout << std::endl;

	std::cout << std::showpoint << std::setprecision(2) << sum(.0) << std::endl;
	std::cout << std::showpoint << std::setprecision(1) << sum(.0, .1) << std::endl;
	std::cout << std::showpoint << std::setprecision(1) << sum(.0, .1, .2) << std::endl;
	std::cout << std::showpoint << std::setprecision(1) << sum(.0, .1, .2, .3) << std::endl;
	std::cout << std::showpoint << std::setprecision(2) << sum(.0, .1, .2, .3, .4) << std::endl;
	std::cout << std::showpoint << std::setprecision(2) << sum(.0, .1, .2, .3, .4, .5) << std::endl;
	std::cout << std::showpoint << std::setprecision(2) << sum(.0, .1, .2, .3, .4, .5, .6) << std::endl;
	std::cout << std::showpoint << std::setprecision(2) << sum(.0, .1, .2, .3, .4, .5, .6, .7) << std::endl;
	std::cout << std::showpoint << std::setprecision(2) << sum(.0, .1, .2, .3, .4, .5, .6, .7, .8) << std::endl;
	std::cout << std::showpoint << std::setprecision(2) << sum(.0, .1, .2, .3, .4, .5, .6, .7, .8, .9) << std::endl;
	std::cout << std::endl;

	std::cout << mul(1) << std::endl;
	std::cout << mul(1, 2) << std::endl;
	std::cout << mul(1, 2, 3) << std::endl;
	std::cout << mul(1, 2, 3, 4) << std::endl;
	std::cout << mul(1, 2, 3, 4, 5) << std::endl;
	std::cout << mul(1, 2, 3, 4, 5, 6) << std::endl;
	std::cout << mul(1, 2, 3, 4, 5, 6, 7) << std::endl;
	std::cout << mul(1, 2, 3, 4, 5, 6, 7, 8) << std::endl;
	std::cout << mul(1, 2, 3, 4, 5, 6, 7, 8, 9) << std::endl;
	std::cout << std::endl;

	std::cout << std::setprecision(2) << mul(1.1) << std::endl;
	std::cout << std::setprecision(3) << mul(1.1, 1.2) << std::endl;
	std::cout << std::setprecision(3) << mul(1.1, 1.2, 1.3) << std::endl;
	std::cout << std::setprecision(3) << mul(1.1, 1.2, 1.3, 1.4) << std::endl;
	std::cout << std::setprecision(3) << mul(1.1, 1.2, 1.3, 1.4, 1.5) << std::endl;
	std::cout << std::setprecision(3) << mul(1.1, 1.2, 1.3, 1.4, 1.5, 1.6) << std::endl;
	std::cout << std::setprecision(3) << mul(1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7) << std::endl;
	std::cout << std::setprecision(4) << mul(1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8) << std::endl;
	std::cout << std::setprecision(4) << mul(1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9) << std::endl;
	return EXIT_SUCCESS;
}
