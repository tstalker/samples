TARGET = work
OBJLIST = error.o expression.o gettoken.o main.o primary.o term.o
DEPENDS = generic.hpp makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

error.o: error.cpp $(DEPENDS)
expression.o: expression.cpp $(DEPENDS)
gettoken.o: gettoken.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
primary.o: primary.cpp $(DEPENDS)
term.o: term.cpp $(DEPENDS)
