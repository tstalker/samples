#include "myexcept.hpp"
#include "mystring.hpp"

void mystring::checkrange(const size_t i) const
{
	if(i >= size)
		throw myoutrange(i, "mystring::operator []");
}
