#include "print.hpp"

#include <iostream>

int main(void)
{
	int a(1);
	int b(2);
	std::cout << &a << ' ' << &b << std::endl;

	const size_t n(10);
	unsigned z[n];
	for(size_t i{}; i < sizeof z / sizeof *z; i++)
	{
		z[i] = i;
	}
	prn::print("static", z, sizeof z / sizeof *z);

	auto* p(new unsigned[n]);
	for(size_t i{}; i < n; i++)
	{
		p[i] = i;
	}
	prn::print("free", p, n);

	auto* q(new unsigned[n]);
	for(size_t i{}; i < n; i++)
	{
		q[i] = i;
	}
	prn::print("free", q, n);

	delete[] p;
	delete[] q;
	return EXIT_SUCCESS;
}
