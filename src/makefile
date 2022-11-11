CC = gcc
CFLAGS = -Wall 
OBJS = main.o list.o

all: m2l

m2l:	$(OBJS)
		$(CC) $(CFLAGS) $^ -o m2l

main.o: main.c list.h
		$(CC) -c $(CFLAGS) main.c

list.o: list.c list.h
		$(CC) -c $(CFLAGS) list.c

clean:
		rm -rf *.o rn2Int
