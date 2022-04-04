#include <iostream>

int main(void)
{
	const unsigned short x(1); // 0x0001
	auto p(reinterpret_cast<const unsigned char*>(&x));
	auto s(*p ? "little" : "big");
	std::cout << s << "-endian" << std::endl;
	return EXIT_SUCCESS;
}
