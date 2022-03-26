TARGET = work
OBJLIST = cmpfwd.o cmprev.o find.o init.o main.o print.o
DEPENDS = header.h makefile
CFLAGS = -march=native -pipe -O3 -std=c2x -Wall -Werror -Winline
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

cmpfwd.o: cmpfwd.c $(DEPENDS)
cmprev.o: cmprev.c $(DEPENDS)
find.o: find.c $(DEPENDS)
init.o: init.c $(DEPENDS)
main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
