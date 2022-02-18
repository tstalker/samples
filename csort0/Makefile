TARGET = work
OBJLIST = compare.o find.o init.o main.o print.o

CC = cc
CFLAGS = -std=c11 -march=native -pipe -O3 -Wall -Werror -Winline
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

compare.o: compare.c header.h Makefile
find.o: find.c header.h Makefile
init.o: init.c header.h Makefile
main.o: main.c header.h Makefile
print.o: print.c header.h Makefile
