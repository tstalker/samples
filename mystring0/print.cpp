#include "mystring.hpp"

std::ostream& operator << (std::ostream& o, const mystring& s)
{
	o << '[' << s.size << ' ';
	s.out(o);
	return o << ']';
}
