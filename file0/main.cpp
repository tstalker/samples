#include <iostream>
#include <string_view>

void print(std::string_view, const unsigned*, const size_t);

int main(void)
{
	int a(1);
	int b(2);
	std::cout << &a << ' ' << &b << std::endl;

	const size_t n(10);
	unsigned z[n];
	for(size_t i{}; i < sizeof z / sizeof *z; i++)
		z[i] = i;
	print("static", z, sizeof z / sizeof *z);

	auto* p(new unsigned[n]);
	for(size_t i{}; i < n; i++)
		p[i] = i;
	print("free", p, n);

	auto* q(new unsigned[n]);
	for(size_t i{}; i < n; i++)
		q[i] = i;
	print("free", q, n);

	delete[] p;
	delete[] q;
}

void print(std::string_view s, const unsigned* p, const size_t n)
{
	std::cout << s << ':' << std::endl;
	for(size_t i{}; i < n; i++)
		std::cout << &p[i] << ' ' << p[i] << std::endl;
}
