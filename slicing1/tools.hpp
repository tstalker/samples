#pragma once

#include "derived.hpp"

#include <sstream>

namespace tools
{
	using std::literals::string_literals::operator ""s;

	std::string get_parentheses(void);
	std::string get_parentheses(std::size_t);
	std::string get_parentheses(std::string_view);
	std::string get_parentheses(const std::ostringstream&);
	std::string get_parentheses(const work::base&);
	std::string get_quoted(const std::ostringstream&);
	std::string get_square_brackets(std::string_view);
	std::string get_square_brackets(const std::ostringstream&);
	std::string get_square_brackets(const work::base&);
	std::string get_square_brackets(const work::derived&);
	std::string get_parentheses_move(std::string_view);
	std::string get_parentheses_move(const work::base&);
	void init(work::base*, std::size_t);
	void print(const work::base*, std::size_t);
}
