TARGET = work
OBJLIST = Element.o LinkedList.o main.o
DEPENDS = Element.hpp Makefile
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

Element.o: Element.cpp $(DEPENDS)
LinkedList.o: LinkedList.cpp LinkedList.hpp $(DEPENDS)
main.o: main.cpp LinkedList.hpp $(DEPENDS)
