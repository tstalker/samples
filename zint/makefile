TARGET = work
OBJLIST = decrement increment main print zint
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++20 -Wall -Winline
STRIP = strip

all: $(TARGET)
	@echo $(OBJLIST)
	@echo ${OBJLIST:.o= }

$(TARGET): decrement.o increment.o main.o print.o zint.o
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) {decrement,increment,main,print,zint}.o

decrement.o: decrement.cpp zint.hpp makefile
increment.o: increment.cpp zint.hpp makefile
main.o: main.cpp zint.hpp makefile
print.o: print.cpp zint.hpp makefile
zint.o: zint.cpp zint.hpp makefile
