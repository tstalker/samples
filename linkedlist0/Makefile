TARGET = work
OBJLIST = element.o linkedlist.o main.o
CC = c++
CFLAGS = -std=$(CC)14 -march=native -Wall -Werror -Winline -pipe -O3
STRIP = strip
STFLAGS = -s
RMFLAGS = -fv

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $(STFLAGS) $@.exe

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(RMFLAGS) $(TARGET)

clean:
	$(RM) $(RMFLAGS) $(OBJLIST)

element.o: element.cpp element.hpp Makefile
linkedlist.o: linkedlist.cpp linkedlist.hpp element.hpp Makefile
main.o: main.cpp linkedlist.hpp element.hpp Makefile
