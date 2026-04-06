DEPENDS = Makefile

AFLAGS = -march=native -O3 -pipe
BFLAGS = $(AFLAGS) -std=$(STD)
WFLAGS = -Wall -Werror -Winline
CFLAGS = $(BFLAGS) $(WFLAGS)
LFLAGS = $(BFLAGS) -flto -Wl,--as-needed

STRIP = strip
SFLAGS = -s
