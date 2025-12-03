TARGET = work
OBJLIST = Error.o Expression.o GetToken.o Main.o Primary.o Term.o
DEPENDS = Calc.hpp Token.hpp Makefile
CC = c++
CFLAGS = -march=native -O3 -pipe -std=c++23 -Wall -Werror -Winline
STRIP = strip

all: $(TARGET)

$(TARGET): $(OBJLIST)
	$(CC) $(CFLAGS) -o $@ $^
	$(STRIP) $@

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
