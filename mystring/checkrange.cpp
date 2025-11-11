#include "myexcept.hpp"
#include "mystring.hpp"

void gen::mystring::checkrange(const std::size_t i) const
{
	if(i >= size)
	{
		throw myoutrange(i, "mystring::operator []");
	}
}
