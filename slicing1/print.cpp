#include "derived.hpp"
#include "generic.hpp"

void print(const base* src, const std::size_t& count)
{
	auto ptr(dynamic_cast<const derived*>(src));

	for(std::size_t i{}; i < count; i++)
	{
		ptr[i].print();
	}
}
