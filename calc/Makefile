include ../mkinclude/cppdefs.mk
include ../mkinclude/gendefs.mk

CC = c++
DEPENDS += Calc.hpp Token.hpp
TARGET = work
OBJLIST = Error.o Expression.o GetToken.o Main.o Primary.o Term.o

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

Error.o: Error.cpp $(DEPENDS)
Expression.o: Expression.cpp $(DEPENDS)
GetToken.o: GetToken.cpp $(DEPENDS)
Main.o: Main.cpp $(DEPENDS)
Primary.o: Primary.cpp $(DEPENDS)
Term.o: Term.cpp $(DEPENDS)
