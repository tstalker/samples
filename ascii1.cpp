#include <limits>
#include <locale>
#include <iostream>

using std::cout;
using std::endl;
using std::numeric_limits;

using limchr = numeric_limits <char>;

int main(void)
{
	for(short int c(limchr::min()); c <= limchr::max(); c++)
		cout.put(iscntrl(c) ? ' ' : c) << ':'
		<< static_cast <unsigned int> (static_cast <unsigned char> (c)) << ' ';

	cout << endl;
	return int();
}
