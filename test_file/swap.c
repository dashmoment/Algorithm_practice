#include "swap.h"

int swap(int *a, int *b){
	int  c = *a;
	*a = *b;
	*b = c;

	printf("a = %p\n",  a);
	printf("b = %p\n",  b);
	//printf("c = %p\n",  c);

	

	return 0;
}