include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
TARGET = work
OBJLIST = abc.o def.o ghi.o main.o

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

abc.o: abc.cpp abc.hpp ghi.hpp $(DEPENDS)
def.o: def.cpp def.hpp ghi.hpp $(DEPENDS)
ghi.o: ghi.cpp ghi.hpp $(DEPENDS)
main.o: main.cpp abc.hpp def.hpp ghi.hpp $(DEPENDS)
