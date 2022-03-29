#include "header.hpp"

int main(void)
{
	std::vector<int> data;
	gen::init(data, 10);
	gen::print("Source", data);
	gen::shell(data);
	gen::print("Sorted", data);
	return EXIT_SUCCESS;
}
