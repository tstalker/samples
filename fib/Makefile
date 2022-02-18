TARGET = work
OBJLIST = bine.o cycle.o main.o print.o recur.o
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++20 -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

bine.o: bine.cpp fib.hpp Makefile
cycle.o: cycle.cpp fib.hpp Makefile
main.o: main.cpp fib.hpp Makefile
print.o: print.cpp fib.hpp Makefile
recur.o: recur.cpp fib.hpp Makefile
