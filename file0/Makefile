SRC = main.cpp
TGT = work
OBJ = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -std=$(CC)17 -march=native -O3 -pipe -Wall -Werror -Winline
RM = rm
RMFLAGS = -fv
DBG = strip
DBGFLAGS = -s

all: $(TGT)

$(TGT): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	$(DBG) $(DBGFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

allclean: clean
	$(RM) $(RMFLAGS) $(TGT)

clean:
	$(RM) $(RMFLAGS) $(OBJ)

main.o: main.cpp
