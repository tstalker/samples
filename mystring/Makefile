include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += mystring.hpp
OBJLIST = alloc.o assign.o checkrange.o clear.o destruct.o index.o main.o move.o mystring.o origin.o out.o print.o reverse.o
TARGET = work

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean: cleanobj
	$(RM) $(RFLAGS) $(TARGET)

cleanobj:
	$(RM) $(RFLAGS) $(OBJLIST)

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
