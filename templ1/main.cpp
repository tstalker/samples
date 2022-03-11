#include "print.hpp"

int main(void)
{
	const int v[][3]
	{
		{1, 2, 3},
		{4, 5, 6}
	};
	prn::print(v[0]);
	prn::print(v[1]);
	return EXIT_SUCCESS;
}
