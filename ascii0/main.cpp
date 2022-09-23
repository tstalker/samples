#include <limits>
#include <iostream>

int
main(void)
{
	auto first(true);
	for(short c(std::numeric_limits<char>::min()); c <= std::numeric_limits<char>::max(); c++)
	{
		const auto d(std::iscntrl(c) ? ' ' : c);
		const unsigned char e(c);
		const unsigned short u(e);
		std::cout.put(d) << ':' << u;
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
