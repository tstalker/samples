#include "print.hpp"

#include <numeric>

int main(void)
{
	std::vector<int> v(10);
	std::iota(v.begin(), v.end(), decltype(v)::value_type());
	prn::print(v);
	std::reverse(v.begin(), v.end());
	prn::print(v);
	std::sort(v.begin(), v.end());
	prn::print(v);
	return EXIT_SUCCESS;
}
