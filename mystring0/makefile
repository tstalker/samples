TARGET = work
OBJLIST = alloc.o assign.o checkrange.o clear.o index.o main.o move.o mystring.o origin.o out.o print.o reverse.o
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

alloc.o: alloc.cpp mystring.hpp makefile
assign.o: assign.cpp myexcept.hpp mystring.hpp makefile
checkrange.o: checkrange.cpp myexcept.hpp mystring.hpp makefile
clear.o: clear.cpp mystring.hpp makefile
index.o: index.cpp mystring.hpp makefile
main.o: main.cpp myexcept.hpp mystring.hpp makefile
move.o: move.cpp myexcept.hpp mystring.hpp makefile
mystring.o: mystring.cpp mystring.hpp makefile
origin.o: origin.cpp mystring.hpp makefile
out.o: out.cpp mystring.hpp makefile
print.o: print.cpp mystring.hpp makefile
reverse.o: reverse.cpp mystring.hpp makefile
