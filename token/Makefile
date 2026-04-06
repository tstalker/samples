include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += decision.hpp token.hpp
TARGET = work
OBJLIST = decision_get0.o decision_get1.o decision_step.o decision_str.o decision_sum.o initialize.o main.o outerror.o output.o

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

decision_get0.o: decision_get0.cpp $(DEPENDS)
decision_get1.o: decision_get1.cpp $(DEPENDS)
decision_step.o: decision_step.cpp $(DEPENDS)
decision_str.o: decision_str.cpp $(DEPENDS)
decision_sum.o: decision_sum.cpp $(DEPENDS)
initialize.o: initialize.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
outerror.o: outerror.cpp $(DEPENDS)
output.o: output.cpp $(DEPENDS)
