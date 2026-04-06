include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
TARGET = work
OBJLIST = main.o tgetch.o

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)
