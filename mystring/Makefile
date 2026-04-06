include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += mystring.hpp
TARGET = work
OBJLIST = alloc.o assign.o checkrange.o clear.o destruct.o index.o main.o move.o mystring.o origin.o out.o print.o reverse.o

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

alloc.o: alloc.cpp $(DEPENDS)
assign.o: assign.cpp myexcept.hpp $(DEPENDS)
checkrange.o: checkrange.cpp myexcept.hpp $(DEPENDS)
clear.o: clear.cpp $(DEPENDS)
destruct.o: destruct.cpp $(DEPENDS)
index.o: index.cpp $(DEPENDS)
main.o: main.cpp myexcept.hpp $(DEPENDS)
move.o: move.cpp myexcept.hpp $(DEPENDS)
mystring.o: mystring.cpp $(DEPENDS)
origin.o: origin.cpp $(DEPENDS)
out.o: out.cpp $(DEPENDS)
print.o: print.cpp $(DEPENDS)
reverse.o: reverse.cpp $(DEPENDS)
