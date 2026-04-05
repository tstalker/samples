TARGET = work
OBJS = main.o
DEPENDS = Makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23
WFLAGS = -Wall -Werror -Winline
AFLAGS = $(CFLAGS) $(WFLAGS)
LFLAGS = -flto $(CFLAGS) -Wl,--as-needed
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(AFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJS)

$(OBJS): $(OBJS:.o=.cpp) $(DEPENDS)
