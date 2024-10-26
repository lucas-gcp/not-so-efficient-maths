# Macros:
COMPILER= gcc
CFLAGS=

all: matrix

matrix: functions.o matrix.o
	$(COMPILER) $(CFLAGS) functions.o matrix.o -o matrix

functions.o: functions.c
	$(COMPILER) $(CFLAGS) -c functions.c

matrix.o: matrix.c
	$(COMPILER) $(CFLAGS) -c matrix.c
