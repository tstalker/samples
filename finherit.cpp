#include <iomanip>
#include <iostream>

using namespace std;

class base
{
public:
	base(const double& d): d(d)
	{}

	void print(void) const
	{
		cout << setprecision(4) << d << endl;
	}

	void print(const double& d) const
	{
		cout << setprecision(4) << d << endl;
	}

	double d{};
};

class derived: public base
{
public:
	using base::base;

	derived(const int& i): base(data), data(data)
	{}

	derived(const double &data): base(data)
	{}

	using base::print;

	void print(void) const
	{
		cout << data << endl;
	}

	void print(const int &i) const
	{
		cout << i << endl;
	}

private:
	int i{};
};

int main(void)
{
	const derived d(1.23);
	d.print();
	d.base::print();
}
