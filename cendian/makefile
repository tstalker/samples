TARGET = work
OBJ = main.o
DEPENDS = makefile
CFLAGS = -march=native -O3 -pipe -std=c2x -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.c) $(DEPENDS)
