TARGET = work
CC = c++
OBJLIST = abc.o def.o ghi.o main.o
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

abc.o: abc.cpp abc.hpp ghi.hpp makefile
def.o: def.cpp def.hpp ghi.hpp makefile
ghi.o: ghi.cpp ghi.hpp makefile
main.o: main.cpp abc.hpp def.hpp ghi.hpp makefile
