#include <cmath>
#include <cstdlib>
#include <iostream>

int main(void)
{
	std::cout << "Enter radius: ";
	double r{};
	std::cin >> r;
	const double pi(3.1415926);
	const double square(4. * pi * std::pow(r, 2.));
	std::cout << "Sphere square: " << square << std::endl;
	const double size(4. / 3. * pi * std::pow(r, 3.));
	std::cout << "Sphere size: " << size << std::endl;
	return EXIT_SUCCESS;
}
