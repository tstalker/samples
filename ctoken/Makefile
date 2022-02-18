TARGET = work
OBJLIST = data_initialize.o decision_get.o decision_print.o decision_step.o decision_str.o decision_sum.o error_message.o error_print.o main.o map.o max.o \
	token_print.o vector_back.o vector_begin.o vector_cbegin.o vector_cend.o vector_check_empty.o vector_check_out_range.o vector_check_read_only.o vector_cinit.o \
	vector_cinitv.o vector_cmp_decision.o vector_cmp_int.o vector_cmp_pair.o vector_dec_size.o vector_empty.o vector_end.o vector_front.o vector_get.o \
	vector_inc_ptr.o vector_init.o vector_initialize.o vector_pop_back.o vector_pop_front.o vector_print.o vector_print_decision.o vector_print_int.o \
	vector_print_pair.o vector_set.o vector_size.o vector_sort.o
CC = cc
CFLAGS = -std=c11 -march=native -pipe -Wall -Winline -O3
STRIP = strip
STFLAGS = -S
RMFLAGS = -fv

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	mv $@.exe $@
	$(STRIP) $(STFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -c $<

allclean: clean
	$(RM) $(RMFLAGS) $(TARGET)

clean:
	$(RM) $(RMFLAGS) $(OBJLIST)
