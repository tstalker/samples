DEPENDS = Makefile
STDC = c23
STDCPP = c++26
CFLAGS = -march=native -O3 -pipe -std=$(STDC) -Wall -Werror -Winline
STRIP = strip
SFLAGS = -s
