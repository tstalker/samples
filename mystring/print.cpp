#include "mystring.hpp"

auto
gen::operator << (
	ostream& o,
	const mystring& s)
-> ostream&
{
	o << '[' << s.size << ' ';
	s.out(o);
	return o << ']';
}
