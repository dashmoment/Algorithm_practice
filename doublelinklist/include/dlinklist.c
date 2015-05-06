#include <stdio.h>
#include "dlinklist.h"

//#define DEBUG


void head(listnode hnode){
	hnode->next = hnode;
	hnode->prev = hnode;
};

void add(listnode addnode , listnode pre){
	listnode temp = pre->next;
	printf("pre->next = %x\n", temp);
	addnode->prev = pre;
	addnode->next = temp;
	pre->next = addnode;

	printf("temp = %x\n", temp);
	printf("pre->next = %x\n", pre->next);
	printf("add->next = %x\n", addnode->next);
};

listnode create(int val){
	listnode tmp;
	tmp = malloc(sizeof(*tmp));
	tmp->val = val;
	return tmp;
};

void list_all_entry(listnode head){
	listnode tmp = head->next;
	printf("Head = %p\n", head);
	while(tmp != head){
		printf("list = %p\n", tmp);
		tmp = tmp->next;
	}

	printf("finished list\n");
}


#if defined DEBUG
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

		
			printf("addr of fist =%p\n", first);
			printf("addr of second =%p\n", second);
			printf("addr of third =%p\n", third);
			printf("addr of 1_next =%p\n",first->next);
			printf("addr of 1_prev =%p\n",first->prev);
			printf("addr of 2_prev =%p\n", second->prev);
			printf("addr of 2_next =%p\n", second->next);	
			printf("addr of 3_prev =%p\n", third->prev);
			printf("addr of 3_next =%p\n", third->next);
		
	}

#endif
