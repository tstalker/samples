TGT = mystring
SRC = alloc.cpp assign.cpp checkrange.cpp clear.cpp index.cpp main.cpp move.cpp mystring.cpp origin.cpp out.cpp print.cpp reverse.cpp

OBJ = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -std=$(CC)11 -march=native -O3 -pipe -Wall -Werror -Winline
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

alloc.o: alloc.cpp mystring.hpp
assign.o: assign.cpp myexcept.hpp mystring.hpp
checkrange.o: checkrange.cpp myexcept.hpp mystring.hpp
clear.o: clear.cpp mystring.hpp
index.o: index.cpp mystring.hpp
main.o: main.cpp myexcept.hpp mystring.hpp
move.o: move.cpp myexcept.hpp mystring.hpp
mystring.o: mystring.cpp mystring.hpp
origin.o: origin.cpp mystring.hpp
out.o: out.cpp mystring.hpp
print.o: print.cpp mystring.hpp
reverse.o: reverse.cpp mystring.hpp
