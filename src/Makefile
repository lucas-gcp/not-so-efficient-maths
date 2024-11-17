# Macros:
COMPILER= gcc
CFLAGS= -Wextra -Wall -I.
OBJECTS= main.o functions.o matrix.o

all: main

main: $(OBJECTS)
	$(COMPILER) $(CFLAGS) $(OBJECTS) -o main

main.o: main.c
	$(COMPILER) $(CFLAGS) -c main.c

matrix.o: matrix.c
	$(COMPILER) $(CFLAGS) -c matrix.c

functions.o: functions.c
	$(COMPILER) $(CFLAGS) -c functions.c

# Remove:
.PHONE: clean
clean:
	rm -f RunBRKGA *.o