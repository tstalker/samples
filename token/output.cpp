#include "token.hpp"

#include <iterator>

auto
token::operator << (std::ostream& os, const decision d)
-> std::ostream&
{
	return os << decision_str(d);
}

auto token::operator << (std::ostream& os, const ivector& v)
-> std::ostream&
{
	auto it(std::ostream_iterator<std::remove_reference_t<decltype(v)>::value_type>(os, " "));
	std::copy(v.cbegin(), v.cend(), it);
	return os;
}
