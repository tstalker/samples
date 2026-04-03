TARGET = work
OBJLIST = alloc.o assign.o checkrange.o clear.o destruct.o index.o main.o move.o mystring.o origin.o out.o print.o reverse.o
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

alloc.o: alloc.cpp mystring.hpp $(DEPENDS)
assign.o: assign.cpp myexcept.hpp mystring.hpp $(DEPENDS)
checkrange.o: checkrange.cpp myexcept.hpp mystring.hpp $(DEPENDS)
clear.o: clear.cpp mystring.hpp $(DEPENDS)
destruct.o: destruct.cpp mystring.hpp $(DEPENDS)
index.o: index.cpp mystring.hpp $(DEPENDS)
main.o: main.cpp myexcept.hpp mystring.hpp $(DEPENDS)
move.o: move.cpp myexcept.hpp mystring.hpp $(DEPENDS)
mystring.o: mystring.cpp mystring.hpp $(DEPENDS)
origin.o: origin.cpp mystring.hpp $(DEPENDS)
out.o: out.cpp mystring.hpp $(DEPENDS)
print.o: print.cpp mystring.hpp $(DEPENDS)
reverse.o: reverse.cpp mystring.hpp $(DEPENDS)
