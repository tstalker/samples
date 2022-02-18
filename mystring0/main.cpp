#include "myexcept.hpp"
#include "mystring.hpp"

#include <new>

int main(void)
{
	try
	{
		const mystring s("abcde");
		std::cout << s << std::endl;

		for(size_t i{}; i < s.getsize(); i++)
			std::cout << s(i);
		std::cout << std::endl;

		for(const auto& c: s)
			std::cout << c;
		std::cout << std::endl;
	}
	catch(const myself &e)
	{
		std::cerr << std::endl << "Error: assignment to itself" << std::endl;
	}
	catch(const myoutrange &e)
	{
		std::cerr << std::endl << "Error: " << e.what() << ": invalid index: " << e.get() << std::endl;
	}
	catch(const std::bad_alloc &e)
	{
		std::cerr << std::endl << "Error: " << e.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << std::endl << "Error: unknown exception" << std::endl;
	}
}
