#ifndef ABC_HPP
#define ABC_HPP

#include <iostream>

class abc
{
public:
	abc(void)
	{}

	abc(const char*);
	abc(const abc&);

	~abc(void)
	{
		delete[] s;
	}

	char& operator[] (const size_t&);
	const char& operator[] (const size_t&) const;

	size_t size(void) const
	{
		return n;
	}

	void print(void) const;

private:
	size_t n{};
	char* s{nullptr};

	friend std::ostream& operator << (std::ostream&, const abc&);
};

#endif
