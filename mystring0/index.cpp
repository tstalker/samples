#include "mystring.hpp"

char& mystring::operator [] (const size_t i)
{
	checkrange(i);
	return ptr[i];
}

const char& mystring::operator [] (const size_t i) const
{
	checkrange(i);
	return ptr[i];
}

char& mystring::operator () (const size_t i)
{
	checkrange(i);
	return ptr[i];
}

const char& mystring::operator () (const size_t i) const
{
	checkrange(i);
	return ptr[i];
}
