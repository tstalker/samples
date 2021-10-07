#include "myexcept.hpp"
#include "mystring.hpp"

const mystring& mystring::operator = (mystring&& s)
{
	std::cout << "mystring::operator = (mystring&& " << s << "): " << *this << " -> ";
    if(this == &s)
        throw myself();
	clear();
	size = s.size;
	ptr = s.ptr;
	s.origin();
	std::cout << *this << std::endl;
	return *this;
}
