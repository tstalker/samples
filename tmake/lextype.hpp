#ifdef LEXTYPE_HPP
#error Redefined header lextype.hpp
#endif

#define LEXTYPE_HPP

namespace tmk
{
	enum class lextype: char;
}

enum class tmk::lextype: char
{
	WORD = 'w',
	OPERATOR = 'o'
};
