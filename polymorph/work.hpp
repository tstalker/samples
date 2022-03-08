#pragma once

#include "base.hpp"

#include <vector>
#include <optional>

namespace gen
{
	class work;
	ostream& operator << (ostream&, const work&);
}

class gen::work
{
public:
	work(const size_t);
	~work(void);

private:
	vector <base*> v;

	friend ostream& operator << (ostream&, const work&);

public:
	void print(ostream&) const;

private:
	mutable optional <bool> op;
};

using gen::operator <<;
