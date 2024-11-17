# Macros:
COMPILER= gcc
CFLAGS= -Wextra -Wall -I.
OBJECTS= f_polynomial.o f_trigonometry.o f_recursive.o f_exponential.o m_memory.o m_io.o main.o

all: main

main: $(OBJECTS)
	$(COMPILER) $(CFLAGS) $(OBJECTS) -o main

main.o: main.c
	$(COMPILER) $(CFLAGS) -c main.c

# Matrix files
m_memory.o: matrix/m_memory.c
	$(COMPILER) $(CFLAGS) -c matrix/m_memory.c

m_io.o: matrix/m_io.c
	$(COMPILER) $(CFLAGS) -c matrix/m_io.c

# Function Files
f_polynomial.o: functions/f_polynomial.c
	$(COMPILER) $(CFLAGS) -c functions/f_polynomial.c

f_trigonometry.o: functions/f_trigonometry.c
	$(COMPILER) $(CFLAGS) -c functions/f_trigonometry.c

f_recursive.o: functions/f_recursive.c
	$(COMPILER) $(CFLAGS) -c functions/f_recursive.c

f_exponential.o: functions/f_exponential.c
	$(COMPILER) $(CFLAGS) -c functions/f_exponential.c

# Remove:
.PHONE: clean
clean:
	rm -f RunBRKGA *.o