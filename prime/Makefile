TARGET = work
OBJLIST = bine.o main.o wilson.o
DEPENDS = Makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

bine.o: bine.cpp fib.hpp $(DEPENDS)
main.o: main.cpp bignumber.hpp $(DEPENDS)
wilson.o: wilson.cpp fib.hpp $(DEPENDS)
