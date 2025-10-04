TARGET = work
OBJLIST = data_initialize.o decision_get.o decision_print.o decision_step.o decision_str.o decision_sum.o error_message.o error_print.o main.o map.o max.o \
	token_print.o vector_back.o vector_begin.o vector_cbegin.o vector_cend.o vector_check_empty.o vector_check_out_range.o vector_check_read_only.o \
	vector_cinit.o vector_cinitv.o vector_cmp_decision.o vector_cmp_int.o vector_cmp_pair.o vector_dec_size.o vector_empty.o vector_end.o vector_front.o \
	vector_get.o vector_inc_ptr.o vector_init.o vector_initv.o vector_initialize.o vector_pop_back.o vector_pop_front.o vector_print.o vector_print_decision.o \
	vector_print_int.o vector_print_pair.o vector_set.o vector_size.o vector_sort.o
CFLAGS = -march=native -O3 -pipe -std=c23 -Wall -Werror -Winline
STRIP = strip
SFLAGS = -s

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

allclean: clean
	$(RM) $(TARGET)

clean:
	$(RM) $(OBJLIST)

data_initialize.o: data_initialize.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
decision_get.o: decision_get.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
decision_print.o: decision_print.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
decision_step.o: decision_step.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
decision_str.o: decision_str.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
decision_sum.o: decision_sum.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
error_message.o: error_message.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
error_print.o: error_print.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
main.o: main.c decision.h error_list.h pair.h token.h types.h vector.h vector_int.h makefile
map.o: map.c decision.h error_list.h pair.h token.h types.h vector.h vector_int.h makefile
max.o: max.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
token_print.o: token_print.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
vector_back.o: vector_back.c decision.h pair.h types.h vector.h vector_back.h vector_int.h makefile
vector_begin.o: vector_begin.c decision.h pair.h types.h vector.h vector_begin.h vector_int.h makefile
vector_cbegin.o: vector_cbegin.c decision.h pair.h types.h vector.h vector_cbegin.h vector_int.h makefile
vector_cend.o: vector_cend.c decision.h pair.h types.h vector.h vector_cend.h vector_int.h makefile
vector_check_empty.o: vector_check_empty.c decision.h error_list.h pair.h token.h types.h vector.h vector_check_empty.h vector_int.h makefile
vector_check_out_range.o: vector_check_out_range.c decision.h error_list.h pair.h token.h types.h vector.h vector_check_out_range.h vector_int.h makefile
vector_check_read_only.o: vector_check_read_only.c decision.h error_list.h pair.h token.h types.h vector.h vector_check_read_only.h vector_int.h makefile
vector_cinit.o: vector_cinit.c decision.h pair.h types.h vector.h vector_cinit.h vector_int.h makefile
vector_cinitv.o: vector_cinitv.c types.h vector.h vector_cinitv.h vector_int.h makefile
vector_cmp_decision.o: vector_cmp_decision.c decision.h types.h vector.h vector_int.h makefile
vector_cmp_int.o: vector_cmp_int.c types.h vector.h vector_int.h makefile
vector_cmp_pair.o: vector_cmp_pair.c decision.h pair.h types.h vector.h makefile
vector_dec_size.o: vector_dec_size.c decision.h pair.h types.h vector.h vector_dec_size.h vector_int.h makefile
vector_empty.o: vector_empty.c decision.h pair.h types.h vector.h vector_empty.h vector_int.h makefile
vector_end.o: vector_end.c decision.h pair.h types.h vector.h vector_end.h vector_int.h makefile
vector_front.o: vector_front.c decision.h pair.h types.h vector.h vector_front.h vector_int.h makefile
vector_get.o: vector_get.c decision.h pair.h types.h vector.h vector_get.h vector_int.h makefile
vector_inc_ptr.o: vector_inc_ptr.c decision.h pair.h types.h vector.h vector_inc_ptr.h vector_int.h makefile
vector_init.o: vector_init.c decision.h pair.h types.h vector.h vector_init.h vector_int.h makefile
vector_initv.o: vector_initv.c types.h vector.h vector_initv.h vector_int.h makefile
vector_initialize.o: vector_initialize.c decision.h pair.h types.h vector.h vector_initialize.h vector_int.h makefile
vector_pop_back.o: vector_pop_back.c decision.h pair.h types.h vector.h vector_int.h vector_pop_back.h makefile
vector_pop_front.o: vector_pop_front.c decision.h pair.h types.h vector.h vector_int.h vector_pop_front.h makefile
vector_print.o: vector_print.c decision.h pair.h types.h vector.h vector_int.h vector_print.h makefile
vector_print_decision.o: vector_print_decision.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
vector_print_int.o: vector_print_int.c decision.h error_list.h token.h types.h vector.h vector_int.h makefile
vector_print_pair.o: vector_print_pair.c decision.h error_list.h pair.h token.h types.h vector.h vector_int.h makefile
vector_set.o: vector_set.c decision.h pair.h types.h vector.h vector_int.h vector_set.h makefile
vector_size.o: vector_size.c decision.h pair.h types.h vector.h vector_int.h vector_size.h makefile
vector_sort.o: vector_sort.c decision.h pair.h types.h vector.h vector_int.h vector_sort.h makefile

decision.h: makefile
error_list.h: makefile
pair.h: makefile
token.h: decision.h error_list.h types.h vector.h vector_int.h makefile
types.h: makefile
vector.h: types.h makefile
vector_back.h: vector.h types.h makefile
vector_begin.h: vector.h types.h makefile
vector_cbegin.h: vector.h types.h makefile
vector_cend.h: vector.h types.h makefile
vector_check_empty.h: decision.h error_list.h token.h types.h vector.h vector_int.h makefile
vector_check_out_range.h: decision.h error_list.h token.h types.h vector.h vector_int.h makefile
vector_check_read_only.h: decision.h error_list.h token.h types.h vector.h vector_int.h makefile
vector_cinit.h: vector.h types.h makefile
vector_cinitv.h: vector.h types.h makefile
vector_dec_size.h: vector.h types.h makefile
vector_empty.h: vector.h types.h makefile
vector_end.h: vector.h types.h makefile
vector_front.h: vector.h types.h makefile
vector_get.h: vector.h types.h makefile
vector_inc_ptr.h: vector.h types.h makefile
vector_init.h: vector.h types.h makefile
vector_initialize.h: vector.h types.h makefile
vector_initv.h: makefile
vector_int.h: vector.h types.h makefile
vector_pop_back.h: vector.h types.h makefile
vector_pop_front.h: vector.h types.h makefile
vector_print.h: vector.h types.h makefile
vector_set.h: vector.h types.h makefile
vector_size.h: vector.h types.h makefile
vector_sort.h: vector.h types.h makefile
