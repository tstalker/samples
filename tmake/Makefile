TARGET = work
OBJLIST = lexeme.o main.o parse.o
CC = c++
CFLAGS = -march=native -std=$(CC)17 -O3 -pipe -Wall -Werror -Winline
STRIP = strip
STFLAGS = -s
RMFLAGS = -fv

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $(STFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(RMFLAGS) $(TARGET)

clean:
	$(RM) $(RMFLAGS) $(OBJLIST)

lexeme.o: main.cpp parse.hpp Makefile
main.o: main.cpp parse.hpp Makefile
parse.o: parse.cpp parse.hpp Makefile
