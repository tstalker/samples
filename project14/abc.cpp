#include "abc.hpp"

#include <cstring>
#include <iterator>
#include <algorithm>

const size_t MAX(5);

abc::abc(const char* s):
	n(s ? strlen(s) : 0),
	s(n ? new char[n]{} : nullptr)
{
	if(n < MAX)
	{
		if(n)
		{
			std::copy_n(s, n, abc::s);
		}
	}
	else
	{
		std::cerr << "string \"" << s << "\" length exceeded " << MAX << std::endl;
	}
}

abc::abc(const abc& x):
	n(this != &x ? x.n : 0),
	s(n ? new char[n]{} : nullptr)
{
	if(n)
	{
		std::copy_n(x.s, n, s);
	}
}

void abc::print(void) const
{
	std::cout << *this << std::endl;
}

std::ostream& operator << (std::ostream& os, const abc& x)
{
	if(x.n)
	{
		std::copy_n(x.s, x.n, std::ostream_iterator <std::remove_pointer_t<decltype(abc::s)>> (os));
	}
	return os;
}
