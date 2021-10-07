#include "token.hpp"

#include <iterator>
#include <algorithm>

token::rostream operator << (token::rostream s, token::crivector v)
{
	std::copy(v.cbegin(), v.cend(), std::ostream_iterator <int> (s, " "));
	return s;
}
