all: test

test: test.o mytoc.o
	cc -o $@ $^

test.o: test.c mytoc.h
	cc -c -g test.c

mytoc.o: mytoc.c
	cc -c -g mytoc.c

demo:
	./test

clean:
	rm -f *.o *~ test 
