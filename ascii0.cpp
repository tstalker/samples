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
		if(!iscntrl(c)) cout.put(c);

	cout << endl;
	return int();
}
