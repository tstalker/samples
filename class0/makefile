TARGET = work
OBJ = main.o
DEPEND = abc.hpp makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.cpp) $(DEPEND)
