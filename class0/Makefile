TARGET = work
OBJ = main.o
DEPEND = abc.hpp Makefile
CC = c++
CFLAGS = -std=c++17 -march=native -pipe -O3 -Wall -Winline
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
