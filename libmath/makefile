LIB = math
SRC = fact.cpp

include c++.def

ALLLIB = $(LIBPATH)/lib$(LIB).a

all: $(ALLLIB)

$(ALLLIB): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

.cpp.o:
	$(CC) $(CFLAGS) -I $(INCLUDE) -c -o $@ $<

allclean: clean
	$(RM) $(ALLLIB)

clean:
	$(RM) $(OBJ)
