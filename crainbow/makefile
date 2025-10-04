TARGET = work
OBJLIST = get.o main.o
DEPENDS = rainbow.h makefile
CFLAGS = -march=native -O3 -pipe -std=c23 -Wall -Werror -Winline
STRIP = strip
SFLAGS = -s

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

get.o: get.c $(DEPENDS)
main.o: main.c $(DEPENDS)
