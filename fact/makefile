TARGET = work
OBJ = main.o
CC = c++
CFLAGS = -march=native -std=c++20 -O3 -pipe -Wall -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.cpp) fact.hpp Makefile
