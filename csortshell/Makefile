include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += generic.h
TARGET = work
OBJLIST = compare.o init.o main.o print.o shuffle.o sortshell.o swap.o

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(LFLAGS) -o $@ $^
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
