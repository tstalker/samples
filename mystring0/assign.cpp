#include "myexcept.hpp"
#include "mystring.hpp"

const mystring& mystring::operator = (const mystring& s)
{
	std::cout << "mystring::operator = (const mystring& " << s << "): " << *this << " -> ";
	if(this == &s)
		throw myself();
	alloc(s);
	std::cout << *this << std::endl;
	return *this;
}
