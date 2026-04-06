include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += parse.hpp
TARGET = work
OBJLIST = lexeme.o main.o parse.o

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

lexeme.o: lexeme.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
parse.o: parse.cpp $(DEPENDS)
