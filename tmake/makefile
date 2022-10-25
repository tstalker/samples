TARGET = work
OBJLIST = lexeme.o main.o parse.o
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

lexeme.o: lexeme.cpp parse.hpp makefile
main.o: main.cpp parse.hpp makefile
parse.o: parse.cpp parse.hpp makefile
