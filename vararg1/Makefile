include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += print.hpp
OBJLIST = main.o
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

main.o: main.cpp $(DEPENDS)
