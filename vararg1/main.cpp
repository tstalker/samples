#include "print.hpp"

#include <string>

int main(void)
{
	print();
	print(true);
	print(true, 123);
	print(true, 123, 1.23f);
	print(true, 123, 1.23f, 3.1415926);
	print(true, 123, 1.23f, 3.1415926, 'a');
	print(true, 123, 1.23f, 3.1415926, 'a', "abcde");
	using namespace std;
	print(true, 123, 1.23f, 3.1415926, 'a', "abcde", "string"s);
}
