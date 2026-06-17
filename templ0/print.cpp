#include "print.hpp"

void print(void)
{
	std::cout << std::endl;
}

void prn::print(const type& x)
{
	print<type>(x);
}
