include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += generic.h
TARGET = work
OBJLIST = main.o print.o printelem.o sort.o swap.o

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

main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
printelem.o: printelem.c $(DEPENDS)
sort.o: sort.c $(DEPENDS)
swap.o: swap.c $(DEPENDS)
