TARGET = work
OBJLIST = element.o linkedlist.o main.o
DEPENDS = element.hpp Makefile
CC = c++
CFLAGS = -march=native -pipe -O3 -std=c++23 -Wall -Werror -Winline
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

element.o: element.cpp $(DEPENDS)
linkedlist.o: linkedlist.cpp linkedlist.hpp $(DEPENDS)
main.o: main.cpp linkedlist.hpp $(DEPENDS)
