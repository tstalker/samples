DEPENDS = Makefile

AFLAGS = -flto=auto -march=native -O3 -pipe
BFLAGS = $(AFLAGS) -std=$(STD)
WFLAGS = -Wall -Werror -Winline
CFLAGS = $(BFLAGS) $(WFLAGS)
LFLAGS = $(BFLAGS) -Wl,--as-needed

RM = rm
RMFLAGS = -fv

STRIP = strip
SFLAGS = -s
