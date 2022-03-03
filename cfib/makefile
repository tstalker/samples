TARGET = work
OBJLIST = bine.o cycle.o init.o main.o print.o recur.o
DEPENDS = fib.h makefile
CFLAGS = -march=native -O3 -pipe -std=c2x -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.c.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

bine.o: bine.c $(DEPENDS)
cycle.o: cycle.c $(DEPENDS)
init.o: init.c $(DEPENDS)
main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
recur.o: recur.c $(DEPENDS)
