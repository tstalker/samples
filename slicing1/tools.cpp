#include "tools.hpp"

#include <iomanip>

auto tools::get_parentheses(void)
-> std::string
{
	return "()"s;
}

auto tools::get_parentheses(std::size_t n)
-> std::string
{
	return get_parentheses(std::to_string(n));
}

auto tools::get_parentheses(std::string_view src)
-> std::string
{
	return '(' + std::string(src) + ')';
}

auto tools::get_parentheses(const std::ostringstream& oss)
-> std::string
{
	return get_parentheses(oss.str());
}

auto tools::get_parentheses(const work::base& src)
-> std::string
{
	return get_square_brackets(src);
}

auto tools::get_parentheses_move(std::string_view src)
-> std::string
{
	return get_parentheses("&&"s + std::string(src));
}

auto tools::get_parentheses_move(const work::base& src)
-> std::string
{
	return get_parentheses_move(get_square_brackets(src));
}

auto tools::get_quoted(const std::ostringstream& os)
-> std::string
{
	std::ostringstream oss;
	oss << std::quoted(os.str());
	return oss.str();
}

auto tools::get_square_brackets(std::string_view src)
-> std::string
{
	return '[' + std::string(src) + ']';
}

auto tools::get_square_brackets(const std::ostringstream& oss)
-> std::string
{
	return get_square_brackets(oss.str());
}

auto tools::get_square_brackets(const work::base& src)
-> std::string
{
	return get_square_brackets(std::to_string(src.get()));
}

auto tools::get_square_brackets(const work::derived& src)
-> std::string
{
	std::ostringstream oss0;
	std::ostream_iterator<work::derived::value_type> it_out(oss0);
	auto it_end(std::ranges::find(src.cbegin(), src.cend(), work::derived::value_type{}));
	auto text(std::span(src.cbegin(), it_end));
	std::ranges::copy(text, it_out);
	const work::base& tgt(src);
	std::ostringstream oss1;
	oss1 << tgt << ", " << tools::get_quoted(oss0);
	return get_square_brackets(oss1);
}
