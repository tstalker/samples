#ifdef ABC_HPP
#error Redefined header abc.hpp
#endif

#define ABC_HPP

class abc
{
public:
	abc(void): p(nullptr)
	{}

	explicit abc(const int i): p(new int(i))
	{}

	abc(const abc& x): p(new int(*x.p))
	{}

	~abc(void)
	{
		delete p;
	}

	int get(void) const
	{
		return p ? *p : int();
	}

private:
	int* p;
};
