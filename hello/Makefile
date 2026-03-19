TARGET = work
OBJ = main.o
DEPENDS = Makefile
CC = c++
OFLAGS = -O3
CFLAGS = -march=native $(OFLAGS) -pipe -std=c++23 -Wall -Werror -Winline
LFLAGS = -flto $(CFLAGS) -Wl,$(OFLAGS) -Wl,--as-needed
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.cpp) $(DEPENDS)
