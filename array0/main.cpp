#include "print.hpp"

#include <cstdlib>

#define LIST { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }

int main(void)
{
	prn::print(LIST);
	operator << (std::cout, LIST) << std::endl;
	int z[] LIST;
	std::cout << z << std::endl;

	std::cout << std::initializer_list <int> LIST << std::endl;
	auto lst = LIST;
	std::cout << lst << std::endl;
	return EXIT_SUCCESS;
}
