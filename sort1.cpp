#include <random>
#include <cstdlib>
#include <iomanip>
#include <iostream>

int main(void)
{
	const size_t SIZE(10);
	int z[SIZE];
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution ud(1, 99);
	for(auto& x: z)
		x = ud(mt);
	for(const auto& x: z)
		std::cout << std::setfill('0') << std::setw(2) << x << ' ';
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
