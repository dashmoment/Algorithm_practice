#include "include/dlinklist.h"

int main(){
		//int a = 2;
		//int *b ;
		//b = &a;
		//printf("*b =%d\n",*b);
		//printf("addr of *b =%p\n",b);

		listnode first, second, third;
		first = malloc(sizeof(*first));
		first->val = 1;
		head(first);

		second = malloc(sizeof(*second));
		second->val = 2;

		third = create(3);

		add(second,first);
		add(third,second);

		list_all_entry(first);

		/*
			printf("addr of fist =%p\n", first);
			printf("addr of second =%p\n", second);
			printf("addr of third =%p\n", third);
			printf("addr of 1_next =%p\n",first->next);
			printf("addr of 1_prev =%p\n",first->prev);
			printf("addr of 2_prev =%p\n", second->prev);
			printf("addr of 2_next =%p\n", second->next);	
			printf("addr of 3_prev =%p\n", third->prev);
			printf("addr of 3_next =%p\n", third->next);
		*/
	}
