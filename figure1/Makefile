TARGET = work
OBJLIST = area.o main.o print.o
CC = c++
CFLAGS = -std=c++17 -march=native -O3 -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@.exe

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

area.o: area.cpp figure.hpp triangle.hpp Makefile
main.o: main.cpp circle.hpp figure.hpp square.hpp rectangle.hpp triangle.hpp Makefile
print.o: print.cpp figure.hpp Makefile
