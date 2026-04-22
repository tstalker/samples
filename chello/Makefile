include ../mkinclude/cdefs.mk
include ../mkinclude/gendefs.mk

TARGET = work
OBJ = main.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	@if [[ -f $(TARGET) ]]; \
	then \
		$(RM) $(RMFLAGS) $(TARGET); \
	fi

clean:
	@for f in $(OBJ); \
	do \
		if [[ -f $${f} ]]; \
		then \
			$(RM) $(RMFLAGS) $${f}; \
		fi \
	done

$(OBJ): $(OBJ:.o=.c) $(DEPENDS)
