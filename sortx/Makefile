TARGET = work
OBJLIST = main.o
CC = c++
CFLAGS = -march=native -std=c++17 -O3 -Wall -Winline
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

$(OBJLIST): $(OBJLIST:.o=.cpp) print.hpp Makefile
