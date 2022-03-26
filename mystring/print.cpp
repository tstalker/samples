#include "mystring.hpp"

auto
operator << (std::ostream& o, const mystring& s)
-> std::ostream&
{
	o << '[' << s.size << ' ';
	s.out(o);
	return o << ']';
}
