SRC = Element.cpp LinkedList.cpp main.cpp
TGT = LinkedList
OBJ = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -std=$(CC)11 -march=native -O2 -pipe -Wall -Werror -Winline
RM = rm
RMFLAGS = -fv

all: $(TGT)

$(TGT): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(RMFLAGS) $(TGT)

clean:
	$(RM) $(RMFLAGS) $(OBJ)

Element.o: Element.cpp Element.hpp
LinkedList.o: LinkedList.cpp Element.hpp LinkedList.hpp
main.o: main.cpp Element.hpp LinkedList.hpp
