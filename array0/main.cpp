#include "print.hpp"

#define LIST {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

int main(void)
{
	prn::print(LIST);
	//std::cout << LIST;
	operator << (std::cout, LIST);
	std::cout << std::initializer_list<int> LIST;
	const auto lst = LIST;
	prn::print(lst);
	std::cout << lst;
	const int z[] LIST;
	prn::print(z);
	const auto N(sizeof z / sizeof *z);
	prn::print(z, N);
	std::cout << z;
	return EXIT_SUCCESS;
}
