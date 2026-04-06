include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += rainbow.h
TARGET = work
OBJLIST = get.o main.o

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

get.o: get.c $(DEPENDS)
main.o: main.c $(DEPENDS)
