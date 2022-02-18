#include <cstdlib>
#include <iostream>

extern const int x;

int main(void)
{
	std::cout << x;
	const auto x(1);
	{
		std::cout << ' ' << x;
		const auto x(2);
		{
			std::cout << ' ' << x;
			const auto x(3);
			{
				std::cout << ' ' << x;
				const auto x(4);
				{
					std::cout << ' ' << x;
					const auto x(5);
					{
						std::cout << ' ' << x;
						const auto x(6);
						{
							std::cout << ' ' << x;
							const auto x(7);
							{
								std::cout << ' ' << x;
								const auto x(8);
								{
									std::cout << ' ' << x;
									const auto x(9);
									std::cout << ' ' << x;
								}
								std::cout << ' ' << x;
							}
							std::cout << ' ' << x;
						}
						std::cout << ' ' << x;
					}
					std::cout << ' ' << x;
				}
				std::cout << ' ' << x;
			}
			std::cout << ' ' << x;
		}
		std::cout << ' ' << x;
	}
	std::cout << ' ' << x << ' ' << ::x << std::endl;
	return EXIT_SUCCESS;
}

const int x{};
