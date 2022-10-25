#pragma once

#include "lextype.hpp"

#include <string>
#include <fstream>

namespace tmk
{
	class lexeme;
}

class tmk::lexeme
{
public:
	lexeme(const lextype& type, const std::string& word): type(type), word(word)
	{}

	lexeme(std::ifstream&);
	lexeme(const lexeme&) = delete;
	lexeme(lexeme&&) = delete;
	lexeme& operator = (const lexeme&) = delete;
	lexeme& operator = (lexeme&&) = delete;
	~lexeme(void) = default;

	lexeme& operator += (const char& c)
	{
		word += c;
		return *this;
	}

private:
	lextype type;
	std::string word;
};
