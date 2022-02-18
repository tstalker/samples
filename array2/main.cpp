#include "print.hpp"

int main(void)
{
	const std::size_t N1(4), N2(5);
	const int z[][N1][N2]
	{
		{
			{ 0, 1, 2, 3, 4 },
			{ 5, 6, 7, 8, 9 },
			{ 10, 11, 12, 13, 14 },
			{ 15, 16, 17, 18, 19 }
		},
		{
			{ 20, 21, 22, 23, 24 },
			{ 25, 26, 27, 28, 29 },
			{ 30, 31, 32, 33, 34 },
			{ 35, 36, 37, 38, 39 }
		},
		{
			{ 40, 41, 42, 43, 44 },
			{ 45, 46, 47, 48, 49 },
			{ 50, 51, 52, 53, 54 },
			{ 55, 56, 57, 58, 59 }
		}
	};
	prn::print(z);
	std::cout << std::endl;
	const auto N0(sizeof z / sizeof *z);
	prn::print(*z, N0);
	std::cout << std::endl;
	prn::print(**z, N0, N1, N2);
	std::cout << z;
	return EXIT_SUCCESS;
}
