#include "tools.hpp"

void tools::init(work::base* src, std::size_t count)
{
	std::ostringstream oss;
	std::ostream_iterator<work::derived::value_type> it_out(oss);
	oss << src << ", " << count;
	std::cout << __func__ << tools::get_parentheses(oss) << std::endl;

	auto dptr(dynamic_cast<work::derived*>(src)); // Avoid slicing

	for(std::size_t i{}; i < count; i++)
	{
		std::string ss;
		const auto si(std::to_string(i));

		for(std::size_t j{}; j < i; j++)
		{
			ss += si;
		}
		dptr[i] = work::derived(i, ss);
	}
}
