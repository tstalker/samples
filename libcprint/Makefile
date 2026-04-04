LIBNAME = cprint
SRC = print_one.c print_row.c print_table0.c print_table1.c print_table2.c print_cube0.c print_cube1.c print_cube2.c print_cube3.c print_cube4.c

include c.def

ALLLIB = $(LIBPATH)/lib$(LIBNAME).a

all: $(ALLLIB)

$(ALLLIB): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDE) -c -o $@ $<

allclean: clean
	$(RM) $(ALLLIB)

clean:
	$(RM) $(OBJ)
