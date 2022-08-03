#include "mystring.hpp"

gen::mystring::~mystring(void)
{
	cout << "mystring::~mystring(): " << *this << endl;
	clear();
}
