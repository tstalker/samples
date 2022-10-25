#pragma once

#include <string>
#include <fstream>

namespace tmk
{
	void parse(std::ifstream&);
	lexeme getlex(std::ifstream&);
}
