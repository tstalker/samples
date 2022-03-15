#include <vector>
#include <cstdlib>
#include <iostream>

int main(void)
{
	std::vector <int> v;

	std::cout << "Enter vector size: ";
	size_t n;
	std::cin >> n;

	std::cout << "Enter values:" << std::endl;
	for(size_t i{}; i < n; i++)
	{
		int x;
		std::cin >> x;
		v.push_back(x);
	}

	for(const auto& x: v)
		std::cout << x << ' ';
	std::cout << std::endl;

	return EXIT_SUCCESS;
}
