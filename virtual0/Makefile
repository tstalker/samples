TARGET = work
OBJLIST = main.o print.o
CC = c++
CFLAGS = -march=native -std=c++17 -pipe -O3 -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

main.o: main.cpp header.hpp Makefile
print.o: print.cpp header.hpp Makefile
