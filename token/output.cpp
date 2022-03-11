#include "token.hpp"

#include <iterator>

token::rostream operator << (token::rostream s, token::crivector v)
{
	auto it(std::ostream_iterator<int>(s, " "));
	std::copy(v.cbegin(), v.cend(), it);
	return s;
}
