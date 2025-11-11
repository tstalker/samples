#include "bignumber.hpp"

int main(void)
{
	fib::bignumber<fib::uchar> x;
	x.print();

	for(unsigned i{}; i < 1000000; i++)
	{
		std::cout << ' ';
		(++x).print();
	}

	std::cout << std::endl;
	return EXIT_SUCCESS;
}
