TARGET = work
OBJLIST = base.o derived.o main.o work.o
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

base.o: base.cpp base.hpp $(DEPENDS)
derived.o: derived.cpp base.hpp derived.hpp $(DEPENDS)
main.o: main.cpp base.hpp work.hpp $(DEPENDS)
work.o: work.cpp base.hpp derived.hpp work.hpp $(DEPENDS)

# base.hpp
# derived.hpp: base.hpp
# work.hpp: base.hpp
