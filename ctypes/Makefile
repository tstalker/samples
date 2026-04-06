include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += generic.h
TARGET = work
OBJ = main.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LFLAGS) -o $@ $^
ifeq ("$(MSYSTEM)", "MINGW64")
	$(STRIP) $(SFLAGS) `ls --append-exe $@`
else
	$(STRIP) $(SFLAGS) $@
endif

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJ)

$(OBJ): $(OBJ:.o=.c) $(DEPENDS)
