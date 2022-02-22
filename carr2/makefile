TARGET = work
OBJLIST = main.o print.o shift.o
DEPENDS = print.h makefile
CFLAGS = -march=native -std=c18 -O3 -pipe -Wall -Winline
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

main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
shift.o: shift.c $(DEPENDS)
