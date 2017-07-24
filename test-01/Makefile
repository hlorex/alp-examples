CFLAGS=
LDFLAGS=

test-01: main.o
	g++ $(LDFLAGS) -o test01 main.o
main.o: main.c
	gcc $(CFLAGS) -c main.c
clean:
	rm -f *.o test-01