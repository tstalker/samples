#include "header.hpp"

#include <ctime>
#include <cstdlib>

int main(void)
{
	std::array <type, MAX> v;
	srand(time(nullptr));
	init(v);
	print(v);
	sort(v);
	print(v);
	return EXIT_SUCCESS;
}
