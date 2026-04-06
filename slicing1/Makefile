include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += base.hpp derived.hpp generic.hpp
TARGET = work
OBJ = main.o print.o process.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

main.o: main.cpp $(DEPENDS)
print.o: print.cpp $(DEPENDS)
process.o: process.cpp $(DEPENDS)
