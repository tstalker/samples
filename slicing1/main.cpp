#include "derived.hpp"
#include "generic.hpp"

#include <new>

int main(void)
{
	try
	{
		base* bptr0(new derived);
		bptr0->set(123456789);
		delete bptr0;
		std::cout << std::endl;

		const std::size_t count(10);
		base* bptr(new derived[count]);
		process(bptr, count);
		print(bptr, count);
		auto dptr(dynamic_cast<derived*>(bptr));
		delete[] dptr;
		return EXIT_SUCCESS;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Error: Memory fail: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(...)
	{
		std::cerr << "Error: Unknown exception" << std::endl;
		return EXIT_FAILURE;
	}
}
