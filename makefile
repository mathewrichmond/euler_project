CC=gcc
CFLAGS=-I.
DEPS = math.h math_test.h
OBJ = math.o math_test.o P12.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

P12.a: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)