#include "derived.hpp"

void
gen::derived::print(
	std::ostream& os)
const
{
	os << *this;
}

auto
gen::operator << (
	std::ostream& os,
	const derived& x)
-> std::ostream&
{
	os << '{' << x.get() << ' ' << x.i << '}';
	return os;
}
