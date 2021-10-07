TARGET = decode encode
OBJ0 = DecMain.o DecParse.o GetWord.o
OBJ1 = EncMain.o EncParse.o GetTime.o GetWord.o
CC = c++
CFLAGS = -std=$(CC)17 -march=native -pipe -Wall -Werror -Winline -O3
STRIP = strip
SFLAGS = -s
RMFLAGS = -fv

all: $(TARGET)

decode: $(OBJ0)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $(SFLAGS) $@

encode: $(OBJ1)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $(SFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(RMFLAGS) $(TARGET)

clean:
	$(RM) $(RMFLAGS) $(OBJ0) $(OBJ1)

DecMain.o: DecMain.cpp Decode.hpp Generic.hpp Makefile
DecParse.o: DecParse.cpp Decode.hpp Generic.hpp Makefile
EncMain.o: EncMain.cpp Encode.hpp Generic.hpp Makefile
EncParse.o: EncParse.cpp Encode.hpp Generic.hpp Makefile
GetTime.o: GetTime.cpp Generic.hpp Makefile
GetWord.o: GetWord.cpp Generic.hpp Makefile
