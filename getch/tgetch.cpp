#include "tgetch.hpp"

#include <cstdio>

#include <unistd.h>
#include <ncurses/term.h>

int tgetch(void)
{
	termios oldt;
	GET_TTY(STDIN_FILENO, &oldt);
	auto newt(oldt);
	newt.c_lflag &= ~(ICANON | ECHO);
	SET_TTY(TCSANOW, &newt);
	auto c(getchar());
	SET_TTY(TCSANOW, &oldt);
	return c;
}
