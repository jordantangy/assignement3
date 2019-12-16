all: isort


isort: isort
	gcc -Wall -g -o isort isort.o

isort.o: isort.c isort.h
	gcc -Wall -g -c isort.c



.PHONY: clean all 

clean:
	rm -f *.o .a output