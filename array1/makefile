TARGET = work
OBJ = main.o
DEPENDS = print.hpp makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
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

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.cpp) $(DEPENDS)
