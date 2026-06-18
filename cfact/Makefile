include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += fact.h
OBJLIST = fact.o main.o
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

fact.o: fact.c $(DEPENDS)
main.o: main.c $(DEPENDS)
