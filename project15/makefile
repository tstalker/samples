TARGET = work
CC = c++
CFLAGS = -march=native -std=c++17 -O3 -pipe -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): abc.o main.o
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@.exe

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) {abc,main}.o

abc.o: abc.cpp abc.hpp myexcept.hpp Makefile
main.o: main.cpp abc.hpp myexcept.hpp Makefile
