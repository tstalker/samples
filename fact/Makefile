include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += fact.hpp
TARGET = work
OBJ = main.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.cpp) $(DEPENDS)
