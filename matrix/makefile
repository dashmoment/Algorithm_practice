OBJECTS = matrix.o main.o
CFLAGS +=
LDFLAGS +=
EXEC = app

app: $(OBJECTS)
	gcc -o $(EXEC) $(OBJECTS) ; 

matrix.o: main.c matrix.h
	gcc -c main.c
matrix.o: matrix.c
	gcc -c matrix.c

clean:
	rm app $(OBJECTS)

