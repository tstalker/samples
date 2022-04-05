#include "init.hpp"
#include "print.hpp"
#include "bubble.hpp"

int main(void)
{
	std::vector<int> data;
	gen::init(data, 10);
	std::cout << "Source: " << data << std::endl;
	gen::bubble(data);
	std::cout << "Sorted: " << data << std::endl;
	return EXIT_SUCCESS;
}
