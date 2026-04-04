TARGET = work
OBJLIST = main.o print.o set.o
DEPENDS = Makefile
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

main.o: main.c a0.h a2.h ahead.h atail.h utils.h $(DEPENDS)
print.o: print.c a0.h a3.h ahead.h atail.h utils.h $(DEPENDS)
set.o: set.c a0.h a3.h ahead.h atail.h utils.h $(DEPENDS)

a0.h: $(DEPENDS)
a2.h: a0.h ahead.h atail.h $(DEPENDS)
a3.h: a0.h ahead.h atail.h $(DEPENDS)
ahead.h: $(DEPENDS)
atail.h: $(DEPENDS)
utils.h: $(DEPENDS)
