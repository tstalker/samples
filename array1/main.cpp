#include "print.hpp"

int main(void)
{
	constexpr std::size_t N1(4);
	constexpr int data[][N1]
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15},
		{16, 17, 18, 19},
		{20, 21, 22, 23}
	};
	constexpr auto N0(std::extent_v<decltype(data)>);
	prn::print(data);
	std::cout << std::endl;
	prn::print(*data, N0);
	std::cout << std::endl;
	prn::print(*data, N0, N1);
	std::cout << std::endl << data;
	return EXIT_SUCCESS;
}
