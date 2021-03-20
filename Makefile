m: main.o m.o complex.o mprint.o
	gcc -o m main.o m.o complex.o mprint.o -lm

main.o: main.c m.h complex.h mprint.h
	gcc -c main.c

m.o: m.c complex.h
	gcc -c m.c

complex.o: complex.c complex.h
	gcc -c complex.c

mprint.o: mprint.c mprint.h
	gcc -c mprint.c


