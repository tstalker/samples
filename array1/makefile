TARGET = work
CC = c++
CFLAGS = -march=native -std=c++23 -pipe -O3 -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) main.o

main.o: main.cpp print.hpp makefile
