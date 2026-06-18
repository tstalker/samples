include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += rainbow.h
OBJLIST = get.o main.o
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

get.o: get.c $(DEPENDS)
main.o: main.c $(DEPENDS)
