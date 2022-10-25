#include <limits>
#include <iostream>

int main(void)
{
	auto first(true);

	for(unsigned short c(std::numeric_limits<unsigned char>::min()); c <= std::numeric_limits<unsigned char>::max(); c++)
	{
		const auto d(std::iscntrl(c) ? ' ' : c);
		std::cout.put(d) << ':' << c;

		if(first)
		{
			first = false;
		}
		else
		{
			std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
