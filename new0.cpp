#include <new>
#include <iostream>

struct A
{
	const int x{};
	int y{};
};

int main(void)
{
	try
	{
		auto p(new A{123, 456});
		{
		const int a(p->x);
		std::cout << a << std::endl;
		const int b(p->y);
		std::cout << b << std::endl;
		}
		auto q(new (p) A{111, 222});
		{
		const int a(std::launder(p)->x);
		std::cout << a << std::endl;
		const int b(std::launder(p)->y);
		std::cout << b << std::endl;
		}
		if(p != q)
			std::cerr << "Error" << std::endl;
		delete q;
		delete p;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << "Error: Unknown exception" << std::endl;
	}
}
