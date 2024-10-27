# Macros:
COMPILER= gcc
CFLAGS= -Wextra -Wall

all: main

main: functions.o matrix.o main.o
	$(COMPILER) $(CFLAGS) functions.o matrix.o main.o -o main

functions.o: functions.c
	$(COMPILER) $(CFLAGS) -c functions.c

matrix.o: matrix.c
	$(COMPILER) $(CFLAGS) -c matrix.c

main.o: main.c
	$(COMPILER) $(CFLAGS) -c main.c

# Remove:
.PHONE: clean
clean:
	rm -f RunBRKGA *.o