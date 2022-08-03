#include "fact.hpp"

#include <iomanip>
#include <iostream>

int main(void)
{
	const auto n(2);
	const auto MAX(21ull);
	for(prn::ull i{}; i < MAX; i++)
	{
		std::cout << std::setw(n) << i << ": " << prn::fact(i) << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::setw(n) <<  0 << ": " << prn::Factorial <0>::value << std::endl;
	std::cout << std::setw(n) <<  1 << ": " << prn::Factorial <1>::value << std::endl;
	std::cout << std::setw(n) <<  2 << ": " << prn::Factorial <2>::value << std::endl;
	std::cout << std::setw(n) <<  3 << ": " << prn::Factorial <3>::value << std::endl;
	std::cout << std::setw(n) <<  4 << ": " << prn::Factorial <4>::value << std::endl;
	std::cout << std::setw(n) <<  5 << ": " << prn::Factorial <5>::value << std::endl;
	std::cout << std::setw(n) <<  6 << ": " << prn::Factorial <6>::value << std::endl;
	std::cout << std::setw(n) <<  7 << ": " << prn::Factorial <7>::value << std::endl;
	std::cout << std::setw(n) <<  8 << ": " << prn::Factorial <8>::value << std::endl;
	std::cout << std::setw(n) <<  9 << ": " << prn::Factorial <9>::value << std::endl;
	std::cout << std::setw(n) << 10 << ": " << prn::Factorial<10>::value << std::endl;
	std::cout << std::setw(n) << 11 << ": " << prn::Factorial<11>::value << std::endl;
	std::cout << std::setw(n) << 12 << ": " << prn::Factorial<12>::value << std::endl;
	std::cout << std::setw(n) << 13 << ": " << prn::Factorial<13>::value << std::endl;
	std::cout << std::setw(n) << 14 << ": " << prn::Factorial<14>::value << std::endl;
	std::cout << std::setw(n) << 15 << ": " << prn::Factorial<15>::value << std::endl;
	std::cout << std::setw(n) << 16 << ": " << prn::Factorial<16>::value << std::endl;
	std::cout << std::setw(n) << 17 << ": " << prn::Factorial<17>::value << std::endl;
	std::cout << std::setw(n) << 18 << ": " << prn::Factorial<18>::value << std::endl;
	std::cout << std::setw(n) << 19 << ": " << prn::Factorial<19>::value << std::endl;
	std::cout << std::setw(n) << 20 << ": " << prn::Factorial<20>::value << std::endl;
	std::cout << std::endl;

	std::cout << std::setw(n) <<  0 << ": " << prn::value <0> << std::endl;
	std::cout << std::setw(n) <<  1 << ": " << prn::value <1> << std::endl;
	std::cout << std::setw(n) <<  2 << ": " << prn::value <2> << std::endl;
	std::cout << std::setw(n) <<  3 << ": " << prn::value <3> << std::endl;
	std::cout << std::setw(n) <<  4 << ": " << prn::value <4> << std::endl;
	std::cout << std::setw(n) <<  5 << ": " << prn::value <5> << std::endl;
	std::cout << std::setw(n) <<  6 << ": " << prn::value <6> << std::endl;
	std::cout << std::setw(n) <<  7 << ": " << prn::value <7> << std::endl;
	std::cout << std::setw(n) <<  8 << ": " << prn::value <8> << std::endl;
	std::cout << std::setw(n) <<  9 << ": " << prn::value <9> << std::endl;
	std::cout << std::setw(n) << 10 << ": " << prn::value<10> << std::endl;
	std::cout << std::setw(n) << 11 << ": " << prn::value<11> << std::endl;
	std::cout << std::setw(n) << 12 << ": " << prn::value<12> << std::endl;
	std::cout << std::setw(n) << 13 << ": " << prn::value<13> << std::endl;
	std::cout << std::setw(n) << 14 << ": " << prn::value<14> << std::endl;
	std::cout << std::setw(n) << 15 << ": " << prn::value<15> << std::endl;
	std::cout << std::setw(n) << 16 << ": " << prn::value<16> << std::endl;
	std::cout << std::setw(n) << 17 << ": " << prn::value<17> << std::endl;
	std::cout << std::setw(n) << 18 << ": " << prn::value<18> << std::endl;
	std::cout << std::setw(n) << 19 << ": " << prn::value<19> << std::endl;
	std::cout << std::setw(n) << 20 << ": " << prn::value<20> << std::endl;
	return EXIT_SUCCESS;
}
