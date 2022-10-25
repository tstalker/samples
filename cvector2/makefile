TARGET = work
OBJLIST = main.o print.o printelem.o sort.o swap.o
DEPENDS = generic.h makefile
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

main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
printelem.o: printelem.c $(DEPENDS)
sort.o: sort.c $(DEPENDS)
swap.o: swap.c $(DEPENDS)
