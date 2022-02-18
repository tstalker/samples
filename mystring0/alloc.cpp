#include "mystring.hpp"

void mystring::alloc(const mystring& s)
{
	clear();
	ptr = alloc(size = s.size);
	copy(s);
}
