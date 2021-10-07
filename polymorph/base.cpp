#include "base.hpp"

#include <iomanip>

void
gen::base::print(std::ostream& os)
const
{
	os << *this;
}

auto
operator << (std::ostream& os, const gen::base& x)
-> std::ostream&
{
	os << '[' << std::showpoint << std::setprecision(2) << x.f << ']';
	return os;
}
