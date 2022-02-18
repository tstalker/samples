#ifndef DEF_HPP
#define DEF_HPP

#include "ghi.hpp"

class def: public ghi
{
public:
	def(void)
	{}

	def(const int*, const size_t);
	def(const def&);

	~def(void)
	{
		delete[] p;
	}

	void print(void) const;

private:
	size_t n{};
	int* p{nullptr};

	friend std::ostream& operator << (std::ostream&, const def&);
};

#endif
