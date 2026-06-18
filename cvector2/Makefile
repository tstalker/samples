include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += generic.h
OBJLIST = main.o print.o printelem.o sort.o swap.o
TARGET = work

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean: cleanobj
	$(RM) $(RFLAGS) $(TARGET)

cleanobj:
	$(RM) $(RFLAGS) $(OBJLIST)

main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
printelem.o: printelem.c $(DEPENDS)
sort.o: sort.c $(DEPENDS)
swap.o: swap.c $(DEPENDS)
