TARGET = work
OBJLIST = main.o
DEPEND = base.hpp derived.hpp generic.hpp init.hpp print.hpp work.hpp makefile
CC = c++
CFLAGS = -march=native -std=c++23 -O3 -pipe -Wall -Winline
# -D DEBUG
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) -s $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

$(OBJLIST): $(OBJLIST:.o=.cpp) $(DEPEND)
