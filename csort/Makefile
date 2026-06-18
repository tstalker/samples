include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += header.h
OBJLIST = cmpfwd.o cmprev.o find.o init.o main.o print.o
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

cmpfwd.o: cmpfwd.c $(DEPENDS)
cmprev.o: cmprev.c $(DEPENDS)
find.o: find.c $(DEPENDS)
init.o: init.c $(DEPENDS)
main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
