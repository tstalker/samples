#pragma once

#include "base.hpp"

#include <vector>
#include <optional>

namespace gen
{
	class work;
}

std::ostream& operator << (std::ostream&, const gen::work&);

class gen::work
{
public:
	work(const std::size_t);
	~work(void);

private:
	std::vector <base*> v;

	friend std::ostream& ::operator << (std::ostream&, const work&);

public:
	void print(std::ostream&) const;

private:
	mutable std::optional <bool> op;
};
