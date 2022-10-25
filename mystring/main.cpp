#include "myexcept.hpp"
#include "mystring.hpp"

#include <new>

int main(void)
{
	try
	{
		const gen::mystring s("abcde");
		std::cout << s << std::endl;

		for(std::size_t i{}; i < s.getsize(); i++)
		{
			std::cout << s(i);
		}

		std::cout << std::endl;

		for(const auto& c: s)
		{
			std::cout << c;
		}

		std::cout << std::endl;
		return EXIT_SUCCESS;
	}
	catch(const gen::myself& e)
	{
		std::cerr << std::endl << "Error: assignment to itself" << std::endl;
		return EXIT_FAILURE;
	}
	catch(const gen::myoutrange& e)
	{
		std::cerr << std::endl << "Error: " << e.what() << ": invalid index: " << e.get() << std::endl;
		return EXIT_FAILURE;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << std::endl << "Error: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(...)
	{
		std::cerr << std::endl << "Error: unknown exception" << std::endl;
		return EXIT_FAILURE;
	}
}
