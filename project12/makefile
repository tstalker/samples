TARGET = work
CC = c++
CFLAGS = -march=native -std=c++17 -O3 -pipe -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): init.o main.o print.o sort.o
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@.exe

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) {init,main,print,sort}.o

init.o: init.cpp header.hpp Makefile
main.o: main.cpp header.hpp Makefile
print.o: print.cpp header.hpp Makefile
sort.o: sort.cpp header.hpp Makefile
