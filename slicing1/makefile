TARGET = work
OBJ = derived.o main.o print.o process.o
#CC = c++
#CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
CC = clang++
CFLAGS = -march=native -O3 -pipe -std=c++2b -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

derived.o: derived.cpp base.hpp derived.hpp makefile
main.o: main.cpp base.hpp derived.hpp generic.hpp makefile
print.o: print.cpp base.hpp derived.hpp generic.hpp makefile
process.o: process.cpp base.hpp derived.hpp generic.hpp makefile
