#include "base.hpp"

#include <iomanip>

void
gen::base::print(
	ostream& os)
const
{
	os << *this;
}

auto
gen::operator << (
	ostream& os,
	const base& x)
-> ostream&
{
	os << '[' << showpoint << setprecision(2) << x.f << ']';
	return os;
}
