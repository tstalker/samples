TARGET = work
OBJLIST = find.o init.o main.o print.o shell.o
DEPENDS = header.h makefile
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

find.o: find.c $(DEPENDS)
init.o: init.c $(DEPENDS)
main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
shell.o: shell.c $(DEPENDS)
