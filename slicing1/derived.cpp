#include "tools.hpp"

#include <iomanip>

work::derived::~derived(void)
{
	std::cout << class_name << "::" << __func__ << tools::get_parentheses() << ": " << *this << std::endl;
}

work::derived::derived(void)
{
	init_class(__func__);
	std::cout << class_name << "::" << __func__ << tools::get_parentheses() << ": " << *this << std::endl;
}

work::derived::derived(const value_type* src, std::size_t src_size)
{
	init_class(__func__);
	set(src, src_size);
	std::ostringstream oss0;
	std::ostream_iterator<value_type> it_out(oss0);
	auto it_end(std::ranges::find(src, src + src_size, value_type{}));
	auto text(std::span(src, it_end));
	std::ranges::copy(text, it_out);
	std::ostringstream oss1;
	oss1 << tools::get_quoted(oss0) << ", " << src_size;
	std::cout << class_name << "::" << __func__ << tools::get_parentheses(oss1) << ": " << *this << std::endl;
}

work::derived::derived(std::string_view src)
{
	init_class(__func__);
	set(src);
	std::cout << class_name << "::" << __func__ << std::quoted(src) << ": " << *this << std::endl;
}

work::derived::derived(std::size_t base_src, std::string_view src):
	base(base_src)
{
	init_class(__func__);
	set(src);
	std::ostringstream oss;
	oss << base_src << ", " << std::quoted(src);
	std::cout << class_name << "::" << __func__ << tools::get_parentheses(oss) << ": " << *this << std::endl;
}

work::derived::derived(const derived& src):
	base(src)
{
	init_class(__func__);
	copy(src);
	std::cout << class_name << "::" << __func__ << tools::get_parentheses(src) << ": " << *this << std::endl;
}

work::derived::derived(derived&& src) noexcept:
	base(std::move(src))
{
	init_class(__func__);
	copy(src);
	std::cout << class_name << "::" << __func__ << tools::get_parentheses_move(src) << ": " << *this << std::endl;
	src.clear();
}

auto work::derived::operator =(const derived& src)
-> derived&
{
	std::cout << class_name << "::" << __func__ << tools::get_parentheses(src) << ": " << *this;

	if(this != &src)
	{
		base& tgt(*this);
		tgt = src;
		copy(src);
	}
	std::cout << " -> " << *this << std::endl;
	return *this;
}

auto work::derived::operator =(derived&& src) noexcept
-> derived&
{
	std::cout << class_name << "::" << __func__ << tools::get_parentheses_move(src) << ": " << *this;

	if(this != &src)
	{
		base& tgt(*this);
		tgt = std::move(src);
		copy(src);
		src.clear();
	}
	std::cout << " -> " << *this << std::endl;
	return *this;
}

void work::derived::set(const value_type* src, std::size_t src_size)
{
	constexpr auto value_size(std::extent_v<decltype(value)>);
	const auto tgt_size(std::min(src_size, value_size));

	if(src && tgt_size)
	{
		std::copy_n(src, tgt_size, value);
	}
}

void work::derived::set(std::size_t base_value, std::string_view src)
{
	base& tgt(*this);
	tgt = base_value;
	set(src.data(), src.size());
}

void work::derived::init_class(std::string_view name)
{
	if(class_name.empty())
	{
		class_name = name;
	}
}

void work::derived::print(void) const
{
	std::ostringstream oss;
	std::ostream_iterator<value_type> it_out(oss);
	auto it_end(std::ranges::find(cbegin(), cend(), value_type{}));
	auto text(std::span(cbegin(), it_end));
	std::ranges::copy(text, it_out);
	const base& tgt(*this);
	std::cout << tgt.get() << ", " << tools::get_quoted(oss) << std::endl;
}

auto work::operator <<(std::ostream& os, const derived& src)
-> std::ostream&
{
	os << tools::get_square_brackets(src);
	return os;
}
