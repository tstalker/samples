include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += fib.h
OBJLIST = bine.o cycle.o init.o main.o print.o recur.o
TARGET = work

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(LFLAGS) -o $@ $^ -lm
	$(STRIP) $(SFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean: cleanobj
	$(RM) $(RFLAGS) $(TARGET)

cleanobj:
	$(RM) $(RFLAGS) $(OBJLIST)

bine.o: bine.c $(DEPENDS)
cycle.o: cycle.c $(DEPENDS)
init.o: init.c $(DEPENDS)
main.o: main.c $(DEPENDS)
print.o: print.c $(DEPENDS)
recur.o: recur.c $(DEPENDS)
