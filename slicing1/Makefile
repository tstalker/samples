include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += base.hpp derived.hpp tools.hpp
OBJLIST = base.o derived.o init.o main.o print.o tools.o
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

base.o: base.cpp $(DEPENDS)
derived.o: derived.cpp $(DEPENDS)
init.o: init.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
print.o: print.cpp $(DEPENDS)
tools.o: tools.cpp $(DEPENDS)
