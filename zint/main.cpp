#include "zint.hpp"

#include <stdexcept>

int main(void)
{
	try
	{
		big::zint x(-100);
		for(size_t i{}; i < 200; i++)
		{
			std::cout << x++ << ' ';
		}
		std::cout << x << std::endl;
		return EXIT_SUCCESS;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << "Error: out of range: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(...)
	{
		std::cerr << "Error: Unexpected exception" << std::endl;
		return EXIT_FAILURE;
	}
}
