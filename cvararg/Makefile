include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += print.h
OBJLIST = main.o print.o
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
