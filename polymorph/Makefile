include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += base.hpp
TARGET = work
OBJLIST = base.o derived.o main.o work.o

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

base.o: base.cpp $(DEPENDS)
derived.o: derived.cpp derived.hpp $(DEPENDS)
main.o: main.cpp work.hpp $(DEPENDS)
work.o: work.cpp derived.hpp work.hpp $(DEPENDS)
