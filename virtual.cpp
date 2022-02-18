#include <cstdlib>
#include <iostream>

class A
{
public:
	A(void): x(int())
	{}

	virtual ~A(void)
	{}

	virtual void Print(void) const = 0;

protected:
	int x;
};

class B: public virtual A
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
		std::cout << "B::Print(): " << x << std::endl;
	}

	friend void f(const B*);
};

void f(const B *s)
{
	std::cout << s->x << std::endl;
}

class C: public virtual A
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
		std::cout << "C::Print(): " << x << std::endl;
	}

	friend void f(const C*);
};

void f(const C *s)
{
	std::cout << s->x << std::endl;
}

class D: public B, public C
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
		std::cout << "D::Print(): " << x << std::endl;
	}

	friend void f(const D*);
};

void f(const D *s)
{
	std::cout << s->x << std::endl;
}

int main(void)
{
	{
		B *pb = new B(1);
		f(pb);
		A *pa = pb;
		pa->Print();
		delete pa;
	}
	{
		C *pc = new C(2);
		f(pc);
		A *pa = pc;
		pa->Print();
		delete pa;
	}
	{
		D *pd = new D(3);
		f(pd);
		A *pa = pd;
		pa->Print();
		delete pa;
	}
	return EXIT_SUCCESS;
}
