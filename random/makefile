TGTDEC = decode
TGTENC = encode
TARGET = $(TGTDEC) $(TGTENC)
OBJDEC = DecMain.o DecParse.o GetWord.o
OBJENC = EncMain.o EncParse.o GetTime.o GetWord.o
OBJLIST = DecMain.o DecParse.o EncMain.o EncParse.o GetTime.o GetWord.o
DEPENDS = Generic.hpp makefile
DEPDEC = Decode.hpp $(DEPENDS)
DEPENC = Encode.hpp $(DEPENDS)
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TGTDEC): $(OBJDEC)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

$(TGTENC): $(OBJENC)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

DecMain.o: DecMain.cpp $(DEPDEC)
DecParse.o: DecParse.cpp $(DEPDEC)
EncMain.o: EncMain.cpp $(DEPENC)
EncParse.o: EncParse.cpp $(DEPENC)
GetTime.o: GetTime.cpp $(DEPENDS)
GetWord.o: GetWord.cpp $(DEPENDS)
