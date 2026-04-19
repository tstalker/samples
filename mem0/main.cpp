#include "sample.hpp"

int main(void)
{
	auto pb(new std::byte[sizeof(gen::sample)]{});
	auto ps(new(pb) gen::sample(1234567890123456789ull));
	ps->print();
	ps->~sample();
	ps = nullptr;
	delete[] pb;
	pb = nullptr;
	return EXIT_SUCCESS;
}
