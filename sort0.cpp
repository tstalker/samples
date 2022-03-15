#include <ctime>
#include <cstdlib>
#include <iostream>

int main(void)
{
	const size_t SIZE(10);
	int z[SIZE];
	srand(time(nullptr));
	for(auto& x: z)
		x = rand() % 100;
	for(auto& x: z)
		std::cout << x << ' ';
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
