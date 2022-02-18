TARGET = work
OBJLIST = main.o bine.o cycle.o print.o recur.o
CC = c++
CFLAGS = -march=native -std=$(CC)14 -pipe -Wall -Werror -Winline -O3
STRIP = strip
STFLAGS = -s
RMFLAGS = -fv

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $(STFLAGS) $@.exe

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(RMFLAGS) $(TARGET)

clean:
	$(RM) $(RMFLAGS) $(OBJLIST)

main.o: main.cpp fib.hpp Makefile
bine.o: bine.cpp fib.hpp Makefile
cycle.o: cycle.cpp fib.hpp Makefile
print.o: print.cpp fib.hpp Makefile
recur.o: recur.cpp fib.hpp Makefile
bignumber.hpp
main.cpp
wilson.cpp
