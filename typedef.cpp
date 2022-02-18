#include <iostream>

using std::cout;
using std::endl;

void f(double d)
{
	cout << d << endl;
}

typedef void (*PF0)(double);
using PF1 = void (*)(double);

int main(void)
{
	PF0 pf0(f);
	(*pf0)(1.23);
	pf0(2.34);

	PF1 pf1(pf0);
	(*pf1)(3.45);
	pf1(4.56);
	return int();
}
