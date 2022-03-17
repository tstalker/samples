TARGET = work
OBJ = main.o
DEPENDS = makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.cpp) $(DEPENDS)
