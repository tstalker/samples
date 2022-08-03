#include "mystring.hpp"

auto
gen::mystring::operator ~ (void)
const
-> mystring
{
	mystring s(*this);
	reverse(s.ptr, s.ptr + s.size);
	cout << "mystring::operator ~ (): " << *this << " -> " << s << endl;
	return s;
}
