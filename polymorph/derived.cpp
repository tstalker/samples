#include "derived.hpp"

void
gen::derived::print(std::ostream& os)
const
{
	os << *this;
}

auto
operator << (std::ostream& os, const gen::derived& x)
-> std::ostream&
{
	os << '{' << x.get() << ' ' << x.i << '}';
	return os;
}
