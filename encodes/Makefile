include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += Generic.hpp
TGTDEC = decode
TGTENC = encode
TARGET = $(TGTDEC) $(TGTENC)
OBJDEC = DecMain.o DecParse.o GetWord.o
OBJENC = EncMain.o EncParse.o GetTime.o GetWord.o
OBJLIST = DecMain.o DecParse.o EncMain.o EncParse.o GetTime.o GetWord.o
DEPDEC = Decode.hpp $(DEPENDS)
DEPENC = Encode.hpp $(DEPENDS)

all: $(TARGET)

$(TGTDEC): $(OBJDEC)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

$(TGTENC): $(OBJENC)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

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
