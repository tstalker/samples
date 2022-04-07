#include <thread>
#include <iostream>

thread_local unsigned tlu;

void ft1(void)
{
	std::cout << "ft1: " << tlu++ << std::endl;
}

void ft2(void)
{
	std::cout << "ft2: " << tlu++ << std::endl;
}

int main(void)
{
	std::cout << "main: " << tlu++ << std::endl;
	std::thread t1(ft1);
	std::cout << "main: " << tlu++ << std::endl;
	std::thread t2(ft2);
	std::cout << "main: " << tlu++ << std::endl;
	t1.join();
	std::cout << "main: " << tlu++ << std::endl;
	t2.join();
	std::cout << "main: " << tlu++ << std::endl;
	return EXIT_SUCCESS;
}
