#include "mystring.hpp"

void gen::mystring::alloc(const mystring& s)
{
	clear();
	size = s.size;
	ptr = alloc(size);
	copy(s);
}
