TARGET = work
OBJLIST = base.o derived.o main.o work.o
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

base.o: base.cpp base.hpp makefile
derived.o: derived.cpp base.hpp derived.hpp makefile
main.o: main.cpp base.hpp work.hpp makefile
work.o: work.cpp base.hpp derived.hpp work.hpp makefile

# base.hpp
# derived.hpp: base.hpp
# work.hpp: base.hpp
