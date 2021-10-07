#ifdef HEADER_HPP
#error Redefined header header.hpp
#endif

#define HEADER_HPP

class A
{
public:
	A(void)
	{}

	virtual ~A(void)
	{}

	virtual void print(void) const = 0;

protected:
	int i{1};
};

class B: public A
{
public:
	B(void)
	{}

	~B(void)
	{}

	void print(void) const;

private:
	int i{2};
};
