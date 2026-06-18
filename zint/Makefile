include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += zint.hpp
OBJLIST = decrement.o increment.o main.o print.o zint.o
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

decrement.o: decrement.cpp $(DEPENDS)
increment.o: increment.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
print.o: print.cpp $(DEPENDS)
zint.o: zint.cpp $(DEPENDS)
