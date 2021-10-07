TARGET = work
OBJLIST = area.o main.o out.o perimeter.o
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

area.o: area.cpp figure.hpp Makefile
main.o: main.cpp figure.hpp Makefile
out.o: out.cpp figure.hpp Makefile
perimeter.o: perimeter.cpp figure.hpp Makefile
