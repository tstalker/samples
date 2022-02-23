TARGET = decode encode
OBJLIST0 = decode.o utils.o
OBJLIST1 = encode.o utils.o
DEPENDS = utils.h makefile
CC = cc
CFLAGS = -march=native -O3 -pipe -std=c2x -Wall -Winline
STRIP = strip

all: $(TARGET)

decode: $(OBJLIST0)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

encode: $(OBJLIST1)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST0) $(OBJLIST1)

decode.o: decode.c $(DEPENDS)
encode.o: encode.c $(DEPENDS)
utils.o: utils.c $(DEPENDS)
