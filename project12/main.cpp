#include "header.hpp"

#include <ctime>
#include <cstdlib>

int main(void)
{
	const size_t MAX(10);
	std::vector<type> v(MAX);
	srand(time(nullptr));
	init(v);
	print(v);
	sort(v);
	print(v);
	return EXIT_SUCCESS;
}
