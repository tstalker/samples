TARGET = work
OBJ = main.o tgetch.o
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++20 -Wall -Winline

TTT = main tgetch

all: $(TARGET)
	@echo $(TTT)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@. $^

.cpp.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)
