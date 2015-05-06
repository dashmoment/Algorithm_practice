#include "swap.h"

#define DEBUG 2
#ifdef DEBUG 
#define PRINT(str) printf(str);
#define PRINT_a(str, arg) printf(str, arg);

#else 
#define PRINT(str);
#define PRINT_a(str, arg);
#endif

int main(){
	
	Node p,q;

	int a , b ;
	int *c, *d;

	a = 10;
	b = 7;

	c = &a;
	d = &b;

	p = (Node)malloc(sizeof(struct node));  //assign memory addr
	p->next = NULL;
	p->val = a;
	printf("p->val = %d\n", p->val);
	printf("p is point to addr= %p\n", p);
	printf("p.addr= %p\n", &p);

	printf("main c = %p\n",  c);
	PRINT_a("main d = %p\n" ,d);
	PRINT("test\n");

	swap(c, d);

	printf("swap c = %p\n",  c);
	printf("swap d = %p\n",  d);

	printf("a =%d, b = %d\n", *c, *d);

}