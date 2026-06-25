#include "tools.hpp"

void tools::print(const work::base* src, std::size_t count)
{
	std::ostringstream oss;
	std::ostream_iterator<work::derived::value_type> it_out(oss);
	oss << src << ", " << count;
	std::cout << __func__ << tools::get_parentheses(oss) << std::endl;

	auto dptr(dynamic_cast<const work::derived*>(src)); // Avoid slicing

	for(std::size_t i{}; i < count; i++)
	{
		const work::base* bptr(dptr + i);
		bptr->print();
	}
}
