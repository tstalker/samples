#include "mystring.hpp"

#include <iterator>

void
gen::mystring::out(
	ostream& o)
const
{
	if(size)
	{
		o << '\"';
		auto it{ostream_iterator<char>(o)};
		copy_n(ptr, size, it);
		o << '\"';
	}
	else
	{
		o << "<nullptr>";
	}
}
