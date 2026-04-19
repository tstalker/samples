include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += sample.hpp
TARGET = work
OBJLIST = main.o sample.o

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

main.o: main.cpp $(DEPENDS)
sample.o: sample.cpp $(DEPENDS)
