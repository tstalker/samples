TARGET = work
CC = c++
CFLAGS = -march=native -std=c++17 -O3 -pipe -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): abc.o def.o ghi.o main.o
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@.exe

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) {abc,def,ghi,main}.o

abc.o: abc.cpp abc.hpp ghi.hpp Makefile
def.o: def.cpp def.hpp ghi.hpp Makefile
ghi.o: ghi.cpp ghi.hpp Makefile
main.o: main.cpp abc.hpp def.hpp ghi.hpp Makefile
