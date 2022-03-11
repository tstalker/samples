#pragma once

class A
{
public:
	A(const int& i):
		i(i)
	{}

	virtual ~A(void)
	{}

	virtual void print(void) const = 0;

protected:
	int i{};
};

class B: public A
{
public:
	B(const int& i, const int& j):
		A(i),
		i(j)
	{}

	~B(void)
	{}

	void print(void) const;

private:
	int i{};
};
