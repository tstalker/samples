#ifndef ABC_HPP
#define ABC_HPP

#include "ghi.hpp"

class abc: public ghi
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

	void print(void) const;

private:
	size_t n{};
	char* s{nullptr};

	friend std::ostream& operator << (std::ostream&, const abc&);
};

#endif
