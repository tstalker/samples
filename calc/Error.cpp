#include "Calc.hpp"

#include <iostream>

double Calc::Error(const std::string& s)
{
	std::cerr << "Error: " << s << std::endl;
	return {};
}
