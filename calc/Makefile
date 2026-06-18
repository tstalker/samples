include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

DEPENDS += Calc.hpp Token.hpp
OBJLIST = Error.o Expression.o GetToken.o Main.o Primary.o Term.o
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

Error.o: Error.cpp $(DEPENDS)
Expression.o: Expression.cpp $(DEPENDS)
GetToken.o: GetToken.cpp $(DEPENDS)
Main.o: Main.cpp $(DEPENDS)
Primary.o: Primary.cpp $(DEPENDS)
Term.o: Term.cpp $(DEPENDS)
