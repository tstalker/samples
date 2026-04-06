include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
TARGET = work
OBJLIST = bine.o main.o wilson.o

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

bine.o: bine.cpp fib.hpp $(DEPENDS)
main.o: main.cpp bignumber.hpp $(DEPENDS)
wilson.o: wilson.cpp fib.hpp $(DEPENDS)
