include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += figure.hpp
TARGET = work
OBJLIST = area.o main.o out.o perimeter.o

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

area.o: area.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
out.o: out.cpp $(DEPENDS)
perimeter.o: perimeter.cpp $(DEPENDS)
