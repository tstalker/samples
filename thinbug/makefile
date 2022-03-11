TARGET = work
OBJLIST = main.o print.o set.o
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

main.o: main.cpp a0.hpp a2.hpp ahead.hpp atail.hpp utils.hpp makefile
print.o: print.cpp a0.hpp a3.hpp ahead.hpp atail.hpp utils.hpp makefile
set.o: set.cpp a0.hpp a3.hpp ahead.hpp atail.hpp utils.hpp makefile

a0.hpp: makefile
a2.hpp: a0.hpp ahead.hpp atail.hpp
a3.hpp: a0.hpp ahead.hpp atail.hpp
ahead.hpp: makefile
atail.hpp: makefile
utils.hpp: makefile
