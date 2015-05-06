#include <stdio.h>
#include <stdlib.h>

extern **environ;

int heap_1 = 1;

struct mem_control_block{
	int is_avalible;
	int size;
};

void func_malloc(int **p_int){
	*p_int = (int*)malloc(sizeof(int));
	printf("*p_int = %x\n", *p_int);
	printf("p_int = %x\n", p_int);

}

void printout(int *p_int){
	printf("heap is = %d\n", *p_int);
}

int main(int argc, char* argv[]){

	int i;
	char *p;

	p = getenv("HOME");      //Get value of enviroment var
	printf("$HOME: %s\n", p);

	p = putenv("JESSE=fine");  //Set name an\\& value of enviroment var
	p = getenv("JESSE");
	printf("$JESSE: %s\n", p);

	#ifdef ARGC
		printf("arg count = %d\n", argc);

		for( i = 0 ; i< argc ; i++){
			printf("argv[%d] = %s\n", i,argv[i]);
		}

		int *m_pint;
		func_malloc(&m_pint);
		*m_pint = 5;
		printout(m_pint);
		printf("m_pint = %x\n", m_pint);
		free(m_pint);

	#endif

	#ifdef STACK_HEAP
		int stack_1;
	
		printf("heap_1.ptr = %x\n", &heap_1);
		printf("stack_1.ptr = %x\n", &stack_1);

		printf("heap_start.ptr = %x\n", &heap_1 +4);
		printf("stack_start.ptr = %x\n", &stack_1 +4) ;

		printf("process size = %u\n", (&stack_1 +4) - (&heap_1 +4));
	#endif
}