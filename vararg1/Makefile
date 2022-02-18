TARGET = vararg
OBJLIST = main.o
CC = c++
CFLAGS = -march=native -std=$(CC)14 -pipe -Wall -Werror -Winline -O3
STRIP = strip
STFLAGS = -s
RMFLAGS = -fv

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $(STFLAGS) $@.exe

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(RMFLAGS) $(TARGET)

clean:
	$(RM) $(RMFLAGS) $(OBJLIST)

main.o: main.cpp print.hpp Makefile
