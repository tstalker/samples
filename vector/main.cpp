#include "print.hpp"

#include <numeric>

int main(void)
{
	std::vector<unsigned> v(10);
	std::iota(v.begin(), v.end(), 0);
	prn::print(v);
	std::reverse(v.begin(), v.end());
	prn::print(v);
	std::sort(v.begin(), v.end());
	prn::print(v);
	return EXIT_SUCCESS;
}
