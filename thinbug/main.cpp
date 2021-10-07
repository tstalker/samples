#include "a2.h"
#include "utils.h"

int main(void)
{
	auto p(new A{'a', 12345});
	print(p);
	set(p, 'b', 67890, 1.23f);
	print(p);
	delete p;
}
