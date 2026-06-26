include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += types.h
OBJLIST = circle.o main.o rectangle.o square.o triangle.o utils.o
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

circle.o: circle.c circle.h $(DEPENDS)
main.o: main.c circle.h rectangle.h shape.h square.h triangle.h utils.h $(DEPENDS)
rectangle.o: rectangle.c rectangle.h shape.h utils.h $(DEPENDS)
square.o: square.c square.h $(DEPENDS)
triangle.o: triangle.c shape.h triangle.h utils.h $(DEPENDS)
utils.o: utils.c shape.h utils.h $(DEPENDS)
