include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += fib.hpp
TARGET = work
OBJLIST = bine.o cycle.o main.o print.o recur.o

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

bine.o: bine.cpp $(DEPENDS)
cycle.o: cycle.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
print.o: print.cpp $(DEPENDS)
recur.o: recur.cpp $(DEPENDS)
