include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += rainbow.hpp
OBJLIST = get.o main.o
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

get.o: get.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
