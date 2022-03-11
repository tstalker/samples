#include "print.hpp"

#include <string>

int main(void)
{
	print(true);
	print(true, 123);
	print(true, 123, 1234567890ul);
	print(true, 123, 1234567890ul, 1.23f);
	print(true, 123, 1234567890ul, 1.23f, 3.1415926);
	print(true, 123, 1234567890ul, 1.23f, 3.1415926, 'a');
	print(true, 123, 1234567890ul, 1.23f, 3.1415926, 'a', "abcde");
	using std::operator ""s;
	print(true, 123, 1234567890ul, 1.23f, 3.1415926, 'a', "abcde", "string"s);
	return EXIT_SUCCESS;
}
