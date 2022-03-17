#pragma once

#include <string>
#include <fstream>

namespace tmk
{
	void parse(ifstream&);
	lexeme getlex(ifstream&);
}
