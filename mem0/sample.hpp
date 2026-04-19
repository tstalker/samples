#pragma once

#include <iostream>
#include <string>

namespace gen
{
	class sample;

	std::ostream& operator << (std::ostream&, const sample&);
}

class gen::sample
{
public:
	using value_type = unsigned long long;

	~sample(void)
	{
		std::cout << name << "::" << __func__ << "()" << std::endl;
	}

	sample(value_type);
	sample(const sample&);
	sample(sample&&) noexcept;
	const sample& operator = (const sample&);
	sample& operator = (sample&&) noexcept;

	void print(void) const
	{
		std::cout << x << std::endl;
	}

	void clear(void)
	{
		x = {};
	}

private:
	value_type x{};
	static inline std::string name;

	friend std::ostream& operator << (std::ostream&, const sample&);
};
