#foo = $(bar)
#bar = $(ugh)
#ugh =  Huh?

#all:
#	echo $(foo)

edit : swap.o main.o
.PHONY: all

main.o: main.c swap.h
	gcc -c main.c
swap.o: swap.c swap.h
	gcc -c swap.c 
	
