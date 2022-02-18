TARGET = work
OBJLIST = fact.o main.o
DEPENDS = fact.h Makefile
CFLAGS = -march=native -O3 -pipe -std=c2x -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.c.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

fact.o: fact.c $(DEPENDS)
main.o: main.c $(DEPENDS)
