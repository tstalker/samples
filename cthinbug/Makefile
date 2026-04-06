include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += a0.h ahead.h atail.h utils.h
TARGET = work
OBJLIST = main.o print.o set.o

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

main.o: main.c a2.h $(DEPENDS)
print.o: print.c a3.h $(DEPENDS)
set.o: set.c a3.h $(DEPENDS)
