#include "mystring.hpp"

gen::mystring::mystring(
	mystring&& s):
	size(s.size),
	ptr(s.ptr)
{
	std::cout << "mystring::mystring(mystring&& " << s << ") -> " << *this << std::endl;
	s.origin();
}

gen::mystring::mystring(
	const std::size_t sz,
	const char* s):
	size(sz),
	ptr(alloc(sz))
{
	copy(s);
	std::cout << "mystring::mystring(const size_t " << size << ", const char* ";
	out();
	std::cout << ") -> " << *this << std::endl;
}
