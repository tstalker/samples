#include "mystring.hpp"

#include <iterator>

void mystring::out(std::ostream& o) const
{
	if(size)
	{
		o << '\"';
		std::copy_n(ptr, size, std::ostream_iterator <char> (o));
		o << '\"';
	}
	else o << "<nullptr>";
}
