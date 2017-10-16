all: no.o main.o
	gcc -o notest no.o main.o

no.o: no.c yes.h
	gcc -c no.c

main.o: main.c no.o
	gcc -c main.c

run: all
	./notest

clean:
	rm *.o
	rm *~
