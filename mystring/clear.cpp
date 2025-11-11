#include "mystring.hpp"

void gen::mystring::clear(void)
{
	delete[] ptr;
	origin();
}
