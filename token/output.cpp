#include "token.hpp"

#include <iterator>

auto token::operator << (ostream& os, const ivector& v)
-> ostream&
{
	auto it(ostream_iterator<remove_reference_t<decltype(v)>::value_type>(os, " "));
	copy(v.cbegin(), v.cend(), it);
	return os;
}
