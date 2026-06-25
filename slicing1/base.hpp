#pragma once

#include <iostream>
#include <string>

namespace work
{
	class base;

	std::ostream& operator <<(std::ostream&, const base&);
}

class work::base
{
public:
	virtual ~base(void);
	base(void);
	base(std::size_t);
	base(const base&);
	base(base&&) noexcept;
	base& operator =(const base&);
	base& operator =(base&&) noexcept;

private:
	std::size_t value{};

public:
	auto get(void) const
	{
		return value;
	}

	virtual void print(void) const
	{
		std::cout << value << std::endl;
	}

private:
	static void init_class(std::string_view);

	static inline std::string class_name;

	friend std::ostream& operator <<(std::ostream&, const base&);
};
