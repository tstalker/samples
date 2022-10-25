#include "tgetch.hpp"

#include <iostream>

int main(void)
{
	for(auto c('a'); c <= 'z'; c++)
	{
		std::cout << c;
		tgetch();
	}

	std::cout << std::endl;
	return EXIT_SUCCESS;
}
