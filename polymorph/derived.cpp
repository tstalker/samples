#include "derived.hpp"

void
gen::derived::print(
	ostream& os)
const
{
	os << *this;
}

auto
gen::operator << (
	ostream& os,
	const derived& x)
-> ostream&
{
	os << '{' << x.get() << ' ' << x.i << '}';
	return os;
}
