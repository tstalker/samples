#include "tools.hpp"

#include <new>

int main(void)
{
	try
	{
		const std::size_t count(10);
		work::base* bptr(new work::derived[count]); // Upcast: derived* -> base*. Beware slicing!
		tools::init(bptr, count);
		tools::print(bptr, count);
		auto dptr(dynamic_cast<work::derived*>(bptr)); // Avoid slicing
		delete[] dptr;
		return EXIT_SUCCESS;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Error: Memory fail: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Error: Bad cast: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(...)
	{
		std::cerr << "Error: Unknown exception" << std::endl;
		return EXIT_FAILURE;
	}
}
