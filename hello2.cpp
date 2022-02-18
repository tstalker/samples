#include <iostream>
#include <iterator>

using std::cout;
using std::string;
using std::ostream_iterator;

int main(void)
{
	ostream_iterator <string> out(cout);
	*out = "Hello, world\n";
	return int();
}
