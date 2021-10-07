#include "parse.hpp"

#include <iostream>

int main(void)
{
	const std::string mkfile("tmakefile.txt");
	std::ifstream mkf(mkfile);
	if(!mkf.is_open())
	{
		std::cerr << "Error: file \"" << mkfile << "\" not exist" << std::endl;
		return EXIT_FAILURE;
	}
	std::cout << mkfile << std::endl;
	tmk::parse(mkf);
}
