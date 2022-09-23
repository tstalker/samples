#include "myexcept.hpp"
#include "mystring.hpp"

auto
gen::mystring::operator = (
	mystring&& s)
-> const mystring&
{
	cout << "mystring::operator = (mystring&& " << s << "): " << *this << " -> ";

	if(this == &s)
	{
		throw myself();
	}

	clear();
	size = s.size;
	ptr = s.ptr;
	s.origin();
	cout << *this << endl;
	return *this;
}
