main: main.o phepcong.o
	gcc -o main main.o phepcong.o  
main.o: main.c phepcong.h
	gcc -c main.c  
phepcong.o: phepcong.c phepcong.h
	gcc -c phepcong.c  
clean:
	rm -rf *.o main