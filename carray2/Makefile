include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += print.h
TARGET = work
OBJLIST = main.o print_row.o print0.o print1.o print2.o shift.o

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
print_row.o: print_row.c $(DEPENDS)
print0.o: print0.c $(DEPENDS)
print1.o: print1.c $(DEPENDS)
print2.o: print2.c $(DEPENDS)
shift.o: shift.c $(DEPENDS)
