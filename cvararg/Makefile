TARGET = work
OBJLIST = main.o print.o
CC = cc
CFLAGS = -march=native -std=c11 -pipe -Wall -Werror -Winline -O3
STRIP = strip
STFLAGS = -S
RMFLAGS = -fv

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	mv $@.exe $@
	$(STRIP) $(STFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(RMFLAGS) $(TARGET)

clean:
	$(RM) $(RMFLAGS) $(OBJLIST)

main.o: main.c print.h Makefile
print.o: print.c print.h Makefile
