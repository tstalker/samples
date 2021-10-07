TARGET = work
OBJLIST = main.o print.o
CC = c++
CFLAGS = -march=native -std=c++17 -pipe -Wall -Winline -O3
STRIP = strip
STFLAGS = -s
RMFLAGS = -fv

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $(STFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(RMFLAGS) $(TARGET)

clean:
	$(RM) $(RMFLAGS) $(OBJLIST)

main.o: main.cpp print.hpp Makefile
print.o: print.cpp print.hpp Makefile
