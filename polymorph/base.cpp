#include "base.hpp"

#include <iomanip>

void
gen::base::print(
	std::ostream& os)
const
{
	os << *this;
}

auto
gen::operator << (
	std::ostream& os,
	const base& x)
-> std::ostream&
{
	os << '[' << std::showpoint << std::setprecision(2) << x.f << ']';
	return os;
}
