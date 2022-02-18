TARGET = work
OBJLIST = bine.o cycle.o main.o print.o recur.o
CFLAGS = -std=c11 -march=native -O3 -pipe -Wall -Winline
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

bine.o: bine.c fib.h Makefile
cycle.o: cycle.c fib.h Makefile
main.o: main.c fib.h Makefile
print.o: print.c fib.h Makefile
recur.o: recur.c fib.h Makefile
