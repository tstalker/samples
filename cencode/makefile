TGTDEC = decode
TGTENC = encode
TARGET = $(TGTDEC) $(TGTENC)
OBJDEC = decode.o utils.o
OBJENC = encode.o utils.o
OBJLIST = decode.o encode.o utils.o
DEPENDS = utils.h makefile
CFLAGS = -march=native -O3 -pipe -std=c2x -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TGTDEC): $(OBJDEC)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

$(TGTENC): $(OBJENC)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

decode.o: decode.c $(DEPENDS)
encode.o: encode.c $(DEPENDS)
utils.o: utils.c $(DEPENDS)
