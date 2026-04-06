include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += utils.h
TGTDEC = decode
TGTENC = encode
TARGET = $(TGTDEC) $(TGTENC)
OBJDEC = decode.o utils.o
OBJENC = encode.o utils.o
OBJLIST = decode.o encode.o utils.o

all: $(TARGET)

$(TGTDEC): $(OBJDEC)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

$(TGTENC): $(OBJENC)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

decode.o: decode.c $(DEPENDS)
encode.o: encode.c $(DEPENDS)
utils.o: utils.c $(DEPENDS)
