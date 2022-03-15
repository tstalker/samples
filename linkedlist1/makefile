TARGET = work
OBJLIST = Element.o LinkedList.o main.o
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

Element.o: Element.cpp Element.hpp makefile
LinkedList.o: LinkedList.cpp Element.hpp LinkedList.hpp makefile
main.o: main.cpp Element.hpp LinkedList.hpp makefile
