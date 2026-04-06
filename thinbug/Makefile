include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += a0.hpp ahead.hpp atail.hpp utils.hpp
TARGET = work
OBJLIST = main.o print.o set.o

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

main.o: main.cpp a2.hpp $(DEPENDS)
print.o: print.cpp a3.hpp $(DEPENDS)
set.o: set.cpp a3.hpp $(DEPENDS)
