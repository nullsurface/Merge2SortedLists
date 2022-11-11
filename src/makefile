CC = gcc
CFLAGS = -Wall 
OBJS = main.o

all: m2l

m2l:	$(OBJS)
		$(CC) $(CFLAGS) $^ -o m2l

main.o: main.c
		$(CC) -c $(CFLAGS) main.c

clean:
		rm -rf *.o rn2Int
