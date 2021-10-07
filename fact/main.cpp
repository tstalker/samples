#include "fact.hpp"

#include <cstdlib>
#include <iomanip>
#include <iostream>

int main(void)
{
	const auto PREC(2);

	for(ull i{}; i < 21; i++)
	{
		std::cout << std::setw(PREC) << i << ": " << fact(i) << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::setw(PREC) <<  0 << ": " << Factorial  <0> ::value << std::endl;
	std::cout << std::setw(PREC) <<  1 << ": " << Factorial  <1> ::value << std::endl;
	std::cout << std::setw(PREC) <<  2 << ": " << Factorial  <2> ::value << std::endl;
	std::cout << std::setw(PREC) <<  3 << ": " << Factorial  <3> ::value << std::endl;
	std::cout << std::setw(PREC) <<  4 << ": " << Factorial  <4> ::value << std::endl;
	std::cout << std::setw(PREC) <<  5 << ": " << Factorial  <5> ::value << std::endl;
	std::cout << std::setw(PREC) <<  6 << ": " << Factorial  <6> ::value << std::endl;
	std::cout << std::setw(PREC) <<  7 << ": " << Factorial  <7> ::value << std::endl;
	std::cout << std::setw(PREC) <<  8 << ": " << Factorial  <8> ::value << std::endl;
	std::cout << std::setw(PREC) <<  9 << ": " << Factorial  <9> ::value << std::endl;
	std::cout << std::setw(PREC) << 10 << ": " << Factorial <10> ::value << std::endl;
	std::cout << std::setw(PREC) << 11 << ": " << Factorial <11> ::value << std::endl;
	std::cout << std::setw(PREC) << 12 << ": " << Factorial <12> ::value << std::endl;
	std::cout << std::setw(PREC) << 13 << ": " << Factorial <13> ::value << std::endl;
	std::cout << std::setw(PREC) << 14 << ": " << Factorial <14> ::value << std::endl;
	std::cout << std::setw(PREC) << 15 << ": " << Factorial <15> ::value << std::endl;
	std::cout << std::setw(PREC) << 16 << ": " << Factorial <16> ::value << std::endl;
	std::cout << std::setw(PREC) << 17 << ": " << Factorial <17> ::value << std::endl;
	std::cout << std::setw(PREC) << 18 << ": " << Factorial <18> ::value << std::endl;
	std::cout << std::setw(PREC) << 19 << ": " << Factorial <19> ::value << std::endl;
	std::cout << std::setw(PREC) << 20 << ": " << Factorial <20> ::value << std::endl;
	std::cout << std::endl;

	std::cout << std::setw(PREC) <<  0 << ": " << value  <0> << std::endl;
	std::cout << std::setw(PREC) <<  1 << ": " << value  <1> << std::endl;
	std::cout << std::setw(PREC) <<  2 << ": " << value  <2> << std::endl;
	std::cout << std::setw(PREC) <<  3 << ": " << value  <3> << std::endl;
	std::cout << std::setw(PREC) <<  4 << ": " << value  <4> << std::endl;
	std::cout << std::setw(PREC) <<  5 << ": " << value  <5> << std::endl;
	std::cout << std::setw(PREC) <<  6 << ": " << value  <6> << std::endl;
	std::cout << std::setw(PREC) <<  7 << ": " << value  <7> << std::endl;
	std::cout << std::setw(PREC) <<  8 << ": " << value  <8> << std::endl;
	std::cout << std::setw(PREC) <<  9 << ": " << value  <9> << std::endl;
	std::cout << std::setw(PREC) << 10 << ": " << value <10> << std::endl;
	std::cout << std::setw(PREC) << 11 << ": " << value <11> << std::endl;
	std::cout << std::setw(PREC) << 12 << ": " << value <12> << std::endl;
	std::cout << std::setw(PREC) << 13 << ": " << value <13> << std::endl;
	std::cout << std::setw(PREC) << 14 << ": " << value <14> << std::endl;
	std::cout << std::setw(PREC) << 15 << ": " << value <15> << std::endl;
	std::cout << std::setw(PREC) << 16 << ": " << value <16> << std::endl;
	std::cout << std::setw(PREC) << 17 << ": " << value <17> << std::endl;
	std::cout << std::setw(PREC) << 18 << ": " << value <18> << std::endl;
	std::cout << std::setw(PREC) << 19 << ": " << value <19> << std::endl;
	std::cout << std::setw(PREC) << 20 << ": " << value <20> << std::endl;
	return EXIT_SUCCESS;
}
