#include "mystring.hpp"

void mystring::clear(void)
{
	delete[] ptr;
	origin();
}
