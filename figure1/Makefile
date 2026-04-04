TARGET = work
OBJLIST = area.o main.o print.o
DEPENDS = Makefile
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

area.o: area.cpp figure.hpp triangle.hpp $(DEPENDS)
main.o: main.cpp circle.hpp figure.hpp square.hpp rectangle.hpp triangle.hpp $(DEPENDS)
print.o: print.cpp figure.hpp $(DEPENDS)

circle.hpp: figure.hpp $(DEPENDS)
figure.hpp: $(DEPENDS)
rectangle.hpp: figure.hpp $(DEPENDS)
square.hpp: figure.hpp $(DEPENDS)
triangle.hpp: figure.hpp $(DEPENDS)
