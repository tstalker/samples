TARGET = work
OBJ = main.o
DEPEND = base.hpp derived.hpp generic.hpp init.hpp print.hpp work.hpp makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
# -D DEBUG
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.cpp) $(DEPEND)
