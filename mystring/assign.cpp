#include "myexcept.hpp"
#include "mystring.hpp"

auto
gen::mystring::operator = (const mystring& s)
-> const mystring&
{
	cout << "mystring::operator = (const mystring& " << s << "): " << *this << " -> ";
	if(this == &s)
	{
		throw myself();
	}
	alloc(s);
	cout << *this << endl;
	return *this;
}
