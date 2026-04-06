include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += element.hpp
TARGET = work
OBJLIST = element.o linkedlist.o main.o

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

element.o: element.cpp $(DEPENDS)
linkedlist.o: linkedlist.cpp linkedlist.hpp $(DEPENDS)
main.o: main.cpp linkedlist.hpp $(DEPENDS)
