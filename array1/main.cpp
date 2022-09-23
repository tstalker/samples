#include "print.hpp"

int
main(void)
{
	const std::size_t N1(4);
	const int z[][N1]
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15},
		{16, 17, 18, 19}
	};

	std::cout << z << std::endl;
	prn::print(z);
	std::cout << std::endl;
	const auto n0(sizeof z / sizeof *z);
	prn::print(*z, n0);
	std::cout << std::endl;
	prn::print(*z, n0, N1);
	return EXIT_SUCCESS;
}
