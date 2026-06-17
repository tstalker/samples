#include "print.hpp"

template <>
void prn::print<bool>(const bool& x)
{
	std::cout << std::boolalpha << x;
}

void print(void)
{
	std::cout << std::endl;
}
