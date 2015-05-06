cfile = dlinklist.c main.c
objects = dlinklist.o main.o
out = test
path = include


vpath  = include
CPPFLAGS = -I include  

edit: ${objects}
	gcc $(objects) -o $(out)
	./$(out)

main.o: $(path)/dlinklist.h main.c
	gcc -c  main.c 

dlinklist.o: include/dlinklist.c include/dlinklist.h
	gcc -c  include/dlinklist.c


clean: 
	rm *.o ${out}

.PHONY:edit