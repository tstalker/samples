TARGET = work
OBJLIST = bine.o main.o wilson.o
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

bine.o: bine.cpp fib.hpp makefile
main.o: main.cpp bignumber.hpp makefile
wilson.o: wilson.cpp fib.hpp makefile
