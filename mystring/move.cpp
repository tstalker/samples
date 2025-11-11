#include "myexcept.hpp"
#include "mystring.hpp"

auto gen::mystring::operator = (mystring&& s)
-> const mystring&
{
	std::cout << "mystring::operator = (mystring&& " << s << "): " << *this << " -> ";

	if(this == &s)
	{
		throw myself();
	}

	clear();
	size = s.size;
	ptr = s.ptr;
	s.origin();
	std::cout << *this << std::endl;
	return *this;
}
