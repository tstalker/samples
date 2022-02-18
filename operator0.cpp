#include <complex>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::complex;

char operator "" _c(char c)
{
	return c;
}

int operator "" _i(unsigned long long n)
{
	return static_cast <int> (n);
}

double operator "" _d(long double d)
{
	return static_cast <double> (d);
}

string operator "" _s(const char *s, size_t n)
{
	return string(s, n);
}

constexpr complex <double> operator "" _x(long double d)
{
	return { static_cast <double> (d), double() };
}

int main(void)
{
	cout << 'c'_c << endl;
	cout << 123_i << endl;
	cout << 3.14_d << endl;
	cout << 1.23_x << endl;
	cout << "abcde"_s << endl;
	return int();
}
