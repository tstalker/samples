// This is example code from Chapter 6.6 "Trying the first version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup

#include "generic.hpp"

#include <iostream>

int
main(void)
{
	try
	{
		while(std::cin)
		{
			std::cout << gen::expression() << std::endl;
			return EXIT_SUCCESS;
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(...)
	{
		std::cerr << "unknown exception" << std::endl;
		return 2;
	}
}
