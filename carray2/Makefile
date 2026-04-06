include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += print.h
TARGET = work
OBJLIST = main.o print.o shift.o

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
shift.o: shift.c $(DEPENDS)
