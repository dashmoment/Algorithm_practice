foo = $(bar)
bar = $(ugh)
ugh =  Huh?

#all:
#	echo $(foo)

src = main.c swap.c 
object = main.o swap.o 
target = app_make

edit: $(object)
	gcc size_stackXheap.c -o size_stackXheap
	
	gcc  ${object}  -o ${target}  #gcc {*.o} -o {target app}
	@echo compiling...   #print "compiling" while excute edit
	#./${target}

main.o: main.c swap.h
	gcc -c main.c
swap.o: swap.c 
	gcc -c swap.c

edit2: $(object)
	gcc  $(src) -o app_make

clean:
	cat main.c   #view source code of main.c
	rm -f *.o  $(target)

#.PHONY declare edit is a pseudo targe which may not create any file and dependencies
.PHONY: all, edit, clean
