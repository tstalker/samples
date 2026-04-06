include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += Element.hpp
TARGET = work
OBJLIST = Element.o LinkedList.o main.o

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

Element.o: Element.cpp $(DEPENDS)
LinkedList.o: LinkedList.cpp LinkedList.hpp $(DEPENDS)
main.o: main.cpp LinkedList.hpp $(DEPENDS)
