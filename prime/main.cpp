#include "bignumber.hpp"

int main(void)
{
	math::bignumber <types::uchr> x;
	x.print();
	for(unsigned i{}; i < 1000000; i++)
	{
		std::cout << ' ';
		(++x).print();
	}
	std::cout << std::endl;
}

