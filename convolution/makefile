TARGET = work
OBJLIST = main.o
CC = c++
CFLAGS = -march=native -O3 -std=c++23 -pipe -Wall -Winline
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

$(OBJLIST): main.cpp makefile
