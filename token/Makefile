include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += decision.hpp token.hpp
OBJLIST = decision_get0.o decision_get1.o decision_step.o decision_str.o decision_sum.o initialize.o main.o outerror.o output.o
TARGET = work

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(LFLAGS) -o $@ $^
	$(STRIP) $(SFLAGS) $@

.cpp.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean: cleanobj
	$(RM) $(RFLAGS) $(TARGET)

cleanobj:
	$(RM) $(RFLAGS) $(OBJLIST)

decision_get0.o: decision_get0.cpp $(DEPENDS)
decision_get1.o: decision_get1.cpp $(DEPENDS)
decision_step.o: decision_step.cpp $(DEPENDS)
decision_str.o: decision_str.cpp $(DEPENDS)
decision_sum.o: decision_sum.cpp $(DEPENDS)
initialize.o: initialize.cpp $(DEPENDS)
main.o: main.cpp $(DEPENDS)
outerror.o: outerror.cpp $(DEPENDS)
output.o: output.cpp $(DEPENDS)
