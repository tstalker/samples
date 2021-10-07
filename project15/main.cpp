#include "abc.hpp"
#include "myexcept.hpp"

#include <array>
#include <cstdlib>
#include <iterator>
#include <algorithm>

int main(void)
{
	try
	{
		std::array <abc, 5> v
		{
			"abcde",
			"fghij",
			"klmno",
			"pqrst",
			"uvwxy"
		};
		
		std::copy(v.cbegin(), v.cend(), std::ostream_iterator <decltype(v)::value_type> (std::cout, "\n"));
		std::cout << std::endl;
		return EXIT_SUCCESS;
	}
	catch(const length_exceeded& e)
	{
		std::cerr << std::endl << "Error length_exceeded: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << std::endl << "Error out_of_range: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(const std::exception& e)
	{
		std::cerr << std::endl << "Error exception: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(...)
	{
		std::cerr << std::endl << "Error: Unknown exception" << std::endl;
		return EXIT_FAILURE;
	}
}
