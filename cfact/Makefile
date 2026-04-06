include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += fact.h
TARGET = work
OBJLIST = fact.o main.o

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

fact.o: fact.c $(DEPENDS)
main.o: main.c $(DEPENDS)
