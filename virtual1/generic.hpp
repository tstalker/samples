#include <iostream>

namespace gen
{
	using namespace std;
	class A;
	class B;
	class C;
	class D;

	void fn(const B*);
	void fn(const C*);
	void fn(const D*);
}

class gen::A
{
public:
	A(void)
	{}

	virtual ~A(void)
	{}

	virtual void Print(void) const = 0;

protected:
	int x{};
};

class gen::B:
	public virtual A
{
public:
	B(void)
	{}

	B(int x)
	{
		A::x = x;
	}

	~B(void)
	{}

	void Print(void) const
	{
		cout << "B::Print(): " << x << endl;
	}

	friend void fn(const B*);
};

class gen::C:
	public virtual A
{
public:
	C(void)
	{}

	C(int x)
	{
		A::x = x;
	}

	~C(void)
	{}

	void Print(void) const
	{
		cout << "C::Print(): " << x << endl;
	}

	friend void fn(const C*);
};

class gen::D:
	public B,
	public C
{
public:
	D(int x)
	{
		A::x = x;
	}

	~D(void)
	{}

	void Print(void) const
	{
		cout << "D::Print(): " << x << endl;
	}

	friend void fn(const D*);
};
