#include "linkedlist.hpp"

int main(void)
{
	LinkedList x;
	for(int i{}; i < 2; i++)
	{
		x.AddLast(i);
	}

	std::cout << "Count x: " << x.Count() << std::endl;
	x.Print();

	auto y(x);
	std::cout << "Count y: " << y.Count() << std::endl;
	y.Print();

	x.Remove(0);
	std::cout << "Count x: " << x.Count() << std::endl;
	x.Print();
	return EXIT_SUCCESS;
}
