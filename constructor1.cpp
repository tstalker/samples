#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setprecision;

class X
{
	double data;

public:
	X(float f): X(static_cast <double> (f))
	{}

	X(double d): data(d)
	{}

	~X(void)
	{}

	double get(void) const
	{
		return data;
	}
};

class Y: public X
{
	int data{int()};

public:
	using X::X;

	Y(int i): X(static_cast <float> (i)), data(i)
	{}

	~Y(void)
	{}

	int get(void) const
	{
		return data;
	}
};

int main(void)
{
	Y t(2);
	cout << t.get() << endl;
	cout << t.X::get() << endl;

	Y u(3.1415926);
	cout << endl << u.get() << endl;
	cout << setprecision(8) << u.X::get() << endl;
	return int();
}
