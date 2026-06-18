include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += figure.hpp
OBJLIST = area.o main.o print.o
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

area.o: area.cpp triangle.hpp $(DEPENDS)
main.o: main.cpp circle.hpp square.hpp rectangle.hpp triangle.hpp $(DEPENDS)
print.o: print.cpp $(DEPENDS)
