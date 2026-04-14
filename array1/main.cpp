#include "print.hpp"

int main(void)
{
	constexpr std::size_t N1(4);
	const int z[][N1]
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15},
		{16, 17, 18, 19},
		{20, 21, 22, 23}
	};
	constexpr auto n0(std::extent_v<decltype(z)>);
	std::cout << z << std::endl;
	prn::print(z);
	std::cout << std::endl;
	prn::print(*z, n0);
	std::cout << std::endl;
	prn::print(*z, n0, N1);
	return EXIT_SUCCESS;
}
