#include <cmath>
#include <format>
#include <iostream>

int main(void)
{
	std::setlocale(LC_ALL, "ru_RU.UTF-8");
	std::cout << "Введите коэффициенты квадратного уравнения:" << std::endl;
	double a{1.1}, b{-2.2}, c{-3.3};
	std::cin >> a >> b >> c;
	std::cout << "Коэффициенты квадратного уравнения: " << std::format("{} {} {}", a, b, c) << std::endl;
	auto D{std::pow(b, 2) - 4 * a * c};
	if(D < 0)
	{
		std::cerr << "Дискриминант меньше нуля, корней нет" << std::endl;
		return EXIT_FAILURE;
	}
	auto x1{(-b + std::sqrt(D)) / (2 * a)};
	auto x2{(-b - std::sqrt(D)) / (2 * a)};
	std::cout << "Корни квадратного уравнения: " << std::format("{:.4f} {:.4f}", x1, x2) << std::endl;
	return EXIT_SUCCESS;
}
