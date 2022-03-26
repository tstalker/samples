#include "mystring.hpp"

#include <iterator>

void mystring::out(std::ostream& o) const
{
	if(size)
	{
		o << '\"';
		auto it{std::ostream_iterator<char>(o)};
		std::copy_n(ptr, size, it);
		o << '\"';
	}
	else o << "<nullptr>";
}
