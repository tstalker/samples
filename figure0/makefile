TARGET = work
OBJLIST = area.o main.o out.o perimeter.o
DEPENDS = figure.hpp makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

area.o: area.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
out.o: out.cpp $(DEPENDS)
perimeter.o: perimeter.cpp $(DEPENDS)
