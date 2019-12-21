all: myBank.o main.o
	gcc -Wall -o all main.o myBank.o

main.o: main.c isort.h
	gcc -Wall -c main.c

isort.o: isort.c isort.h
	gcc -Wall -c isort.c

txtfind.o: txtfind.c txtfind.h
	gcc -Wall -c txtfind.c	

.PHONY: clean all 

clean:
	rm -f *.o all