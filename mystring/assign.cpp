#include "myexcept.hpp"
#include "mystring.hpp"

auto gen::mystring::operator = (const mystring& s)
-> const mystring&
{
	std::cout << "mystring::operator = (const mystring& " << s << "): " << *this << " -> ";

	if(this == &s)
	{
		throw myself();
	}

	alloc(s);
	std::cout << *this << std::endl;
	return *this;
}
