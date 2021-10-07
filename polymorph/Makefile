TARGET = work
OBJLIST = base.o derived.o main.o work.o

CC = clang++
CFLAGS = -march=native -std=c++2b -O3 -pipe -Wall -Werror -Winline
STRIP = strip
STFLAGS = -s

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@. $^
	$(STRIP) $(STFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

base.o: base.cpp base.hpp Makefile
derived.o: derived.cpp base.hpp derived.hpp Makefile
main.o: main.cpp base.hpp work.hpp Makefile
work.o: work.cpp base.hpp derived.hpp work.hpp Makefile

# base.hpp
# derived.hpp: base.hpp
# work.hpp: base.hpp
