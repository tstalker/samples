#include "mystring.hpp"

auto
gen::mystring::operator ~ (void)
const
-> mystring
{
	mystring s(*this);
	std::reverse(s.ptr, s.ptr + s.size);
	std::cout << "mystring::operator ~ (): " << *this << " -> " << s << std::endl;
	return s;
}
