TARGET = work
OBJ = main.o print.o process.o
DEPENDS = base.hpp derived.hpp generic.hpp Makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
#CC = clang++
#CFLAGS = -march=native -O3 -pipe -std=c++2b -Wall -Werror -Winline
STRIP = strip
SFLAGS = -s

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
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
