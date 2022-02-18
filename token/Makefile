SRC = decision_get0.cpp decision_get1.cpp decision_step.cpp decision_str.cpp decision_sum.cpp initialize.cpp main.cpp outerror.cpp output.cpp
TGT = token

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
