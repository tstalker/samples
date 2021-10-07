#include "print.hpp"

#include <cstdlib>

int main(void)
{
	const int z[][4]
	{
		{ 0, 1, 2, 3 },
		{ 4, 5, 6, 7 },
		{ 8, 9, 10, 11 },
		{ 12, 13, 14, 15 },
		{ 16, 17, 18, 19 }
	};

	prn::print(z);
	std::cout << std::endl;
	prn::print(*z, sizeof z / sizeof *z);
	return EXIT_SUCCESS;
}
