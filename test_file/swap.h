#include <stdio.h>
#include <stdlib.h>

typedef struct node *Node;

struct node{
	int val;
	Node next;
};

extern int swap(int *a, int *b);