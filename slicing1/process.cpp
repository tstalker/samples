#include "derived.hpp"
#include "generic.hpp"

void process(base* src, const std::size_t& count)
{
	auto ptr(dynamic_cast<derived*>(src));

	for(std::size_t i{}; i < count; i++)
	{
		ptr[i].set(i);
	}
}
