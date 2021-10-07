SRC = main.cpp
TGT = freqs
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

main.o: main.cpp
