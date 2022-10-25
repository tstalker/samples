#include "mystring.hpp"

gen::mystring::mystring(
	mystring&& s):
	size(s.size),
	ptr(s.ptr)
{
	cout << "mystring::mystring(mystring&& " << s << ") -> " << *this << endl;
	s.origin();
}

gen::mystring::mystring(
	const size_t sz,
	const char* s):
	size(sz),
	ptr(alloc(sz))
{
	copy(s);
	cout << "mystring::mystring(const size_t " << size << ", const char* ";
	out();
	cout << ") -> " << *this << endl;
}
