TARGET = decode encode
OBJLIST0 = decode.o utils.o
OBJLIST1 = encode.o utils.o
CC = cc
CFLAGS = -std=c11 -march=native -O3 -pipe -Wall -Winline
STRIP = strip
STFLAGS = -s
RMFLAGS = -fv

all: $(TARGET)

decode: $(OBJLIST0)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $(STFLAGS) $@

encode: $(OBJLIST1)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $(STFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(RMFLAGS) $(TARGET)

clean:
	$(RM) $(RMFLAGS) $(OBJLIST0) $(OBJLIST1)

decode.o: decode.c utils.h Makefile
encode.o: encode.c utils.h Makefile
utils.o: utils.c utils.h Makefile
