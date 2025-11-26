CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: circunferencia

circunferencia: main.o circunferencia.o
	$(CC) $(CFLAGS) -o circunferencia main.o circunferencia.o

main.o: main.c circunferencia.h
	$(CC) $(CFLAGS) -c main.c

circunferencia.o: circunferencia.c circunferencia.h
	$(CC) $(CFLAGS) -c circunferencia.c

clean:
	rm -f *.o circunferencia
