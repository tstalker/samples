#include "tools.hpp"

work::base::~base(void)
{
	std::cout << class_name << "::" << __func__ << tools::get_parentheses() << ": " << *this << std::endl;
}

work::base::base(void)
{
	init_class(__func__);
	std::cout << class_name << "::" << __func__ << tools::get_parentheses() << ": " << *this << std::endl;
}

work::base::base(std::size_t value):
	value(value)
{
	init_class(__func__);
	std::cout << class_name << "::" << __func__ << tools::get_parentheses(value) << ": " << *this << std::endl;
}

work::base::base(const base& src):
	value(src.value)
{
	init_class(__func__);
	std::cout << class_name << "::" << __func__ << tools::get_parentheses(src) << ": " << *this << std::endl;
}

work::base::base(base&& src) noexcept:
	value(src.value)
{
	init_class(__func__);
	std::cout << class_name << "::" << __func__ << tools::get_parentheses_move(src) << ": " << *this << std::endl;
	value = {};
}

auto work::base::operator =(const base& src)
-> base&
{
	std::cout << class_name << "::" << __func__ << tools::get_parentheses(src) << ": " << *this;

	if(this != &src)
	{
		value = src.value;
	}
	std::cout << " -> " << *this << std::endl;
	return *this;
}

auto work::base::operator =(base&& src) noexcept
-> base&
{
	std::cout << class_name << "::" << __func__ << tools::get_parentheses_move(src) << ": " << *this;

	if(this != &src)
	{
		value = src.value;
		src.value = {};
	}
	std::cout << " -> " << *this << std::endl;
	return *this;
}

void work::base::init_class(std::string_view name)
{
	if(class_name.empty())
	{
		class_name = name;
	}
}

auto work::operator <<(std::ostream& os, const base& src)
-> std::ostream&
{
	os << tools::get_square_brackets(src);
	return os;
}
