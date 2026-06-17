#include "print.hpp"

int main(void)
{
	print();
	print(true);
	print(true, 'a');
	print(true, 'a', 123_h);
	print(true, 'a', 123_h, 12345);
	print(true, 'a', 123_h, 12345, 1234567l);
	print(true, 'a', 123_h, 12345, 1234567l, 123456789ll);
	print(true, 'a', 123_h, 12345, 1234567l, 123456789ll, 1.23f);
	print(true, 'a', 123_h, 12345, 1234567l, 123456789ll, 1.23f, 3.1415e123);
	print(true, 'a', 123_h, 12345, 1234567l, 123456789ll, 1.23f, 3.1415e123, "abcde"s);
	print(true, 'a', 123_h, 12345, 1234567l, 123456789ll, 1.23f, 3.1415e123, "abcde"s, "fghij"_s);
	return EXIT_SUCCESS;
}
