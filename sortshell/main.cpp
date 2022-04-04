#include "init.hpp"
#include "print.hpp"
#include "shell.hpp"

int main(void)
{
	std::vector<double> data;
	gen::init(data, 10);
	std::cout << "Source: " << data << std::endl;
	gen::shell(data);
	std::cout << "Sorted: " << data << std::endl;
	return EXIT_SUCCESS;
}
