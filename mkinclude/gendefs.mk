DEPENDS = Makefile

AFLAGS = -flto=4 -march=native -O3 -pipe
BFLAGS = $(AFLAGS) -std=$(STD)
WFLAGS = -Wall -Werror -Winline
CFLAGS = $(BFLAGS) $(WFLAGS)
LFLAGS = $(BFLAGS) -Wl,--as-needed

STRIP = strip
SFLAGS = -s
