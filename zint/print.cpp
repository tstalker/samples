#include "zint.hpp"

#include <cmath>
#include <limits>

std::ostream& big::operator << (std::ostream& o, const zint& z)
{
	o << (z.sign ? '+' : '-');
	unsigned long long x{};

	for(size_t i{}; i < z.v.size(); i++)
	{
		const auto j(z.v.size() - i - 1);
		x += z.v.at(j) * std::pow(std::numeric_limits<decltype(z.v)::value_type>::max() + 1, j);
	}

	o << x;
	return o;
}
