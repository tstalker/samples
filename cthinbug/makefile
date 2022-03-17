TARGET = work
OBJLIST = main.o print.o set.o
CFLAGS = -march=native -O3 -pipe -std=c2x -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

main.o: main.c a0.h a2.h ahead.h atail.h utils.h makefile
print.o: print.c a0.h a3.h ahead.h atail.h utils.h makefile
set.o: set.c a0.h a3.h ahead.h atail.h utils.h makefile

a0.h: makefile
a2.h: a0.h ahead.h atail.h makefile
a3.h: a0.h ahead.h atail.h makefile
ahead.h: makefile
atail.h: makefile
utils.h: makefile
