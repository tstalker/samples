include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += fib.hpp
OBJLIST = bine.o cycle.o main.o print.o recur.o
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

bine.o: bine.cpp $(DEPENDS)
cycle.o: cycle.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
print.o: print.cpp $(DEPENDS)
recur.o: recur.cpp $(DEPENDS)
