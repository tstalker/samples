#include <iostream>

using std::cout;
using std::endl;

class A
{
	int x;

public:
	explicit A(int x): x(x)
	{}

	A(const A &s): A(s.x)
	{}

	~A(void)
	{}

	void print(void) const
	{
		cout << x << endl;
	}
};

class B
{
	int x;

public:
	explicit B(int x): x(x)
	{}

	explicit B(const B &s): B(s.x)
	{}

	~B(void)
	{}

	explicit operator A(void)
	{
		return A(x);
	}

	void print(void) const
	{
		cout << x << endl;
	}
};

int main(void)
{
	B b(1);
	b.print();
	A a(b);
	a.print();
	return int();
}
