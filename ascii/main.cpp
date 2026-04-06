#include <cctype>
#include <iomanip>
#include <iostream>
#include <limits>

int main(void)
{
	auto first(true);
	for(short i(std::numeric_limits<char>::min()); i <= std::numeric_limits<char>::max(); i++)
	{
		if(!std::isprint(i))
		{
			continue;
		}
		if(first)
		{
			first = false;
		}
		else
		{
			std::cout << ' ';
		}
		const auto c(static_cast<char>(i));
		std::cout << std::hex << i << ':' << c;
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
