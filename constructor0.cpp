#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
	double f(double x)
	{
		return x;
	}
};

class B: public A
{
public:
	using A::f;

	int f(int x)
	{
		return x;
	}
};

int main(void)
{
	B t;
	cout << t.f(5) << endl;
	cout << t.f(3.14) << endl;
	return int();
}
