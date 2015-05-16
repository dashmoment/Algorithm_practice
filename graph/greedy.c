#include <stdio.h>
#include <stdlib.h>
#include "greedy.h"

struct set U2[10];

p_set *init(int size){
	
	int i; //index
	p_set U[size];
	
	for (i = 0; i<size; i++){
		U[i] = malloc(sizeof(*U[i])); //need malloc before use
		U[i]->value = i;
		U[i]->root = U[i]; //point to self initially
		printf("U[%d]->value = %d, U[%d]->root = %x\n",i,U[i]->value, i,U[i]->root);
	}
	
	return U;
	
};

void init2(int size){
	int i; //index
	
	
	for(i=0 ; i<size ; i++){
		U2[i].root = &U2[i];
		U2[i].value = i;
		printf("U2[%d]->value = %d, U2[%d]->root = %x\n",i,U2[i].value, i,U2[i].root);
	}
	
	
}

int main(int *argc, char ** argv){
	
	p_set *U = init(10);
	printf("return value = %d\n", U[9]->value);
	
	init2(10);
	printf("return value 2 = %d\n", U2[3].value);


	return 0;

}