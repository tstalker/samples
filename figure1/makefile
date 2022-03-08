TARGET = work
OBJLIST = area.o main.o print.o
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

area.o: area.cpp figure.hpp triangle.hpp makefile
main.o: main.cpp circle.hpp figure.hpp square.hpp rectangle.hpp triangle.hpp makefile
print.o: print.cpp figure.hpp makefile
