include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += Element.hpp
OBJLIST = Element.o LinkedList.o main.o
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

Element.o: Element.cpp $(DEPENDS)
LinkedList.o: LinkedList.cpp LinkedList.hpp $(DEPENDS)
main.o: main.cpp LinkedList.hpp $(DEPENDS)
