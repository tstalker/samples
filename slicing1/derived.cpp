#include "derived.hpp"

#include <numeric>

derived::derived(void)
{
	std::iota(std::begin(ptr), std::end(ptr) - 1, 'a');
	std::cout << "derived::derived(): " << id << ' ' << ptr << std::endl;
}
