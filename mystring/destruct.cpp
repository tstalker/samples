#include "mystring.hpp"

gen::mystring::~mystring(void)
{
	std::cout << "mystring::~mystring(): " << *this << std::endl;
	clear();
}
