include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += utils.h
OBJDEC = decode.o utils.o
OBJENC = encode.o utils.o
OBJLIST = decode.o encode.o utils.o
TGTDEC = decode
TGTENC = encode
TARGET = $(TGTDEC) $(TGTENC)

all: $(TARGET)

$(TGTDEC): $(OBJDEC)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

$(TGTENC): $(OBJENC)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean: cleanobj
	$(RM) $(RFLAGS) $(TARGET)

cleanobj:
	$(RM) $(RFLAGS) $(OBJLIST)

decode.o: decode.c $(DEPENDS)
encode.o: encode.c $(DEPENDS)
utils.o: utils.c $(DEPENDS)
