compiler = gcc
dependencies = lib.h
objects = main.o lib.o

%.o: %.c $(dependencies)
	$(compiler) -c -o $@ $<

collatz: $(objects)
	$(compiler) -o $@ $^

.PHONY = clean

clean:
	rm -rf *.o collatz
