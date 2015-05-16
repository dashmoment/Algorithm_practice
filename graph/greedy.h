#include <stdio.h>
#include <stdlib.h>

typedef struct set *p_set;
typedef struct set{
	p_set root;
	int value;
};

extern p_set *init(int size); // need use pointer to use struct
void init2(int size); //type "struct set" function


//int kruskal(set U[]); //Kruskal algorithm
