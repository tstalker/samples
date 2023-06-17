#include "print.hpp"

#define LIST {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

int main(void)
{
	prn::print(LIST);
	//std::cout << LIST;
	operator << (std::cout, LIST);
	std::cout << std::initializer_list<int> LIST;
	const auto w = LIST;
	prn::print(w);
	std::cout << w;
	const int v[] LIST;
	prn::print(v);
	std::cout << v;
	return EXIT_SUCCESS;
}
