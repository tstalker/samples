#include <iostream>

using Function = void(*)(void);

static Function Do;

int main(void)
{
	Do();
	return EXIT_SUCCESS;
}

void Print(void);

void NeverCalled(void)
{
	Do = Print;
}

void Print(void)
{
	std::cout << "hello, world" << std::endl;
}
