include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += zint.hpp
TARGET = work
OBJLIST = decrement.o increment.o main.o print.o zint.o

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

decrement.o: decrement.cpp $(DEPENDS)
increment.o: increment.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
print.o: print.cpp $(DEPENDS)
zint.o: zint.cpp $(DEPENDS)
