include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += element.hpp
OBJLIST = element.o linkedlist.o main.o
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

element.o: element.cpp $(DEPENDS)
linkedlist.o: linkedlist.cpp linkedlist.hpp $(DEPENDS)
main.o: main.cpp linkedlist.hpp $(DEPENDS)
