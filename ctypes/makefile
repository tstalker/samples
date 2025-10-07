TARGET = work
OBJ = main.o
DEPENDS = generic.h makefile
CFLAGS = -march=native -O3 -pipe -std=c2x -Wall -Werror -Winline
STRIP = strip
SFLAGS = -s

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
ifeq ("$(MSYSTEM)", "MINGW64")
	$(STRIP) $(SFLAGS) `ls --append-exe $@`
else
	$(STRIP) $(SFLAGS) $@
endif

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.c) $(DEPENDS)
