#include "def.hpp"

#include <iterator>
#include <algorithm>

def::def(const int* p, const size_t n):
	n(n),
	p(n ? new int[n] : nullptr)
{
	if(n)
	{
		std::copy_n(p, n, def::p);
	}
}

def::def(const def& x):
	n(this != &x ? x.n : 0),
	p(n ? new int[n] : nullptr)
{
	if(n)
	{
		std::copy_n(x.p, n, p);
	}
}

void def::print(void) const
{
	std::cout << *this << std::endl;
}

std::ostream& operator << (std::ostream& os, const def& x)
{
	if(x.n)
	{
		std::copy_n(x.p, x.n, std::ostream_iterator <std::remove_pointer_t<decltype(def::p)>> (os, " "));
	}
	return os;
}
