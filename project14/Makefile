TARGET = work
OBJLIST = abc.o def.o ghi.o main.o
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

abc.o: abc.cpp abc.hpp ghi.hpp $(DEPENDS)
def.o: def.cpp def.hpp ghi.hpp $(DEPENDS)
ghi.o: ghi.cpp ghi.hpp $(DEPENDS)
main.o: main.cpp abc.hpp def.hpp ghi.hpp $(DEPENDS)
