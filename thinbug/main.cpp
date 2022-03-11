#include "a2.hpp"
#include "utils.hpp"

#include <cstdlib>

int main(void)
{
	auto p(new A{'a', 12345});
	print(p);
	set(p, 'b', 67890, 1.23f);
	print(p);
	delete p;
	return EXIT_SUCCESS;
}
