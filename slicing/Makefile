TARGET = work
OBJLIST = main.o
DEPEND = base.hpp derived.hpp generic.hpp init.hpp print.hpp work.hpp Makefile
CC = clang++
CFLAGS = -march=native -std=c++2b -O3 -pipe -Wall -Winline
# -D DEBUG
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) -s $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

$(OBJLIST): $(OBJLIST:.o=.cpp) $(DEPEND)
