#include <iostream>

int x;

int main(void)
{
	std::cout << x << std::endl;
	auto x(1);
	std::cout << x << std::endl;
	{
		auto x(2);
		std::cout << x << std::endl;
		{
			auto x(3);
			{
				std::cout << x << std::endl;
				auto x(4);
				{
					std::cout << x << std::endl;
					auto x(5);
					std::cout << x << std::endl;
				}
				std::cout << x << std::endl;
			}
			std::cout << x << std::endl;
		}
		std::cout << x << std::endl;
	}
	std::cout << x << std::endl;
	std::cout << ::x << std::endl;
}
