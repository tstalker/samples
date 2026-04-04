TARGET = work
OBJLIST = main.o print.o set.o
DEPENDS = Makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

main.o: main.cpp a0.hpp a2.hpp ahead.hpp atail.hpp utils.hpp $(DEPENDS)
print.o: print.cpp a0.hpp a3.hpp ahead.hpp atail.hpp utils.hpp $(DEPENDS)
set.o: set.cpp a0.hpp a3.hpp ahead.hpp atail.hpp utils.hpp $(DEPENDS)

a0.hpp: $(DEPENDS)
a2.hpp: a0.hpp ahead.hpp atail.hpp $(DEPENDS)
a3.hpp: a0.hpp ahead.hpp atail.hpp $(DEPENDS)
ahead.hpp: $(DEPENDS)
atail.hpp: $(DEPENDS)
utils.hpp: $(DEPENDS)
