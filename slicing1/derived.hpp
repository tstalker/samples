#pragma once

#include "base.hpp"

#include <ranges>

namespace work
{
	class derived;

	std::ostream& operator <<(std::ostream&, const derived&);
}

class work::derived:
	public base
{
public:
	using value_type = char;

	~derived(void);
	derived(void);
	derived(const value_type*, std::size_t);
	derived(std::string_view);
	derived(std::size_t, std::string_view);
	derived(const derived&);
	derived(derived&&) noexcept;
	derived& operator =(const derived&);
	derived& operator =(derived&&) noexcept;

private:
	value_type value[100]{};

public:
	auto begin(void)
	{
		return std::ranges::begin(value);
	}

	auto end(void)
	{
		return std::ranges::end(value);
	}

	auto begin(void) const
	{
		return std::ranges::begin(value);
	}

	auto end(void) const
	{
		return std::ranges::end(value);
	}

	auto cbegin(void) const
	{
		return std::ranges::cbegin(value);
	}

	auto cend(void) const
	{
		return std::ranges::cend(value);
	}

	void clear(void)
	{
		std::fill(begin(), end(), value_type{});
	}

	void copy(const derived& src)
	{
		std::ranges::copy(src.cbegin(), src.cend(), value);
	}

	auto get(void) const
	{
		return value;
	}

	void set(std::string_view src)
	{
		set(src.data(), src.size());
	}

	void set(const value_type*, std::size_t);
	void set(std::size_t, std::string_view);
	void print(void) const override;

private:
	static void init_class(std::string_view);

	static inline std::string class_name;

	friend std::ostream& operator <<(std::ostream&, const derived&);
};
