#pragma once

#include <iostream>

class base
{
public:
	base(void)
	{
		std::cout << "base::base(): " << id << std::endl;
	}

	virtual ~base(void)
	{
		std::cout << "base::~base(): " << id << std::endl;
	}

	auto get(void) const
	{
		return id;
	}

	void set(const std::size_t& id)
	{
		base::id = id;
	}

	void print(void) const
	{
		std::cout << id << std::endl;
	}

protected:
	std::size_t id{};
};
