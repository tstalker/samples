#include "mystring.hpp"

auto
gen::operator << (
	std::ostream& o,
	const mystring& s)
-> std::ostream&
{
	o << '[' << s.size << ' ';
	s.out(o);
	return o << ']';
}
