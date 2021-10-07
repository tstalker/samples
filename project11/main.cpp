#include "header.hpp"

#include <ctime>
#include <cstdlib>

int main(void)
{
	const size_t MAX(10);
	type z[MAX];
	srand(time(nullptr));
	init(z, MAX);
	print(z, MAX);
	sort(z, MAX);
	print(z, MAX);
	return EXIT_SUCCESS;
}
