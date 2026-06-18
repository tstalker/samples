include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += generic.hpp
OBJLIST = fn.o main.o
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

fn.o: fn.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
