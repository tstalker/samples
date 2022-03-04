#include "print.hpp"

#include <cstdlib>

int main(void)
{
	prn::print("ifdcs", 42, 1.23f, 3.14, 'a', "abcde");
	return EXIT_SUCCESS;
}
