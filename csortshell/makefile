TARGET = work
OBJLIST = compare.o init.o main.o print.o shuffle.o sortshell.o swap.o
DEPENDS = generic.h makefile
CFLAGS = -march=native -O3 -pipe -std=c2x -Wall -Werror -Winline
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

compare.o: compare.c $(DEPENDS)
init.o: init.c $(DEPENDS)
main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
shuffle.o: shuffle.c $(DEPENDS)
sortshell.o: sortshell.c $(DEPENDS)
swap.o: swap.c $(DEPENDS)
