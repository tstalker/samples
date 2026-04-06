include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += figure.hpp
TARGET = work
OBJLIST = area.o main.o print.o

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

area.o: area.cpp triangle.hpp $(DEPENDS)
main.o: main.cpp circle.hpp square.hpp rectangle.hpp triangle.hpp $(DEPENDS)
print.o: print.cpp $(DEPENDS)
