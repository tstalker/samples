#include "mystring.hpp"

mystring mystring::operator ~ (void) const
{
	mystring s(*this);
	std::reverse(s.ptr, s.ptr + s.size);
	std::cout << "mystring::operator ~ (): " << *this << " -> " << s << std::endl;
	return s;
}
