include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

OBJLIST = bine.o main.o wilson.o
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

bine.o: bine.cpp fib.hpp $(DEPENDS)
main.o: main.cpp bignumber.hpp $(DEPENDS)
wilson.o: wilson.cpp fib.hpp $(DEPENDS)
