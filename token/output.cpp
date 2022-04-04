#include "token.hpp"

#include <iterator>

auto
token::operator << (ostream& os, const decision d)
-> ostream&
{
	return os << decision_str(d);
}

auto token::operator << (ostream& os, const ivector& v)
-> ostream&
{
	auto it(ostream_iterator<remove_reference_t<decltype(v)>::value_type>(os, " "));
	copy(v.cbegin(), v.cend(), it);
	return os;
}
