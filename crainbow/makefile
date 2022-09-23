TARGET = work
OBJLIST = get.o main.o
DEPENDS = rainbow.h makefile
CFLAGS = -march=native -O3 -pipe -std=c2x -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

get.o: get.c $(DEPENDS)
main.o: main.c $(DEPENDS)
