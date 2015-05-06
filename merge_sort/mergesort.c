#include "mergesort.h"
#include <stdio.h>

//#define DEBUG

int S[] = {2,5,10,87,6,7,6,5};

void merge(int low, int mid, int high){

	
	#ifdef DEBUG
			printf("low = %d\n", low);
			printf("mid = %d\n", mid);
			printf("high = %d\n", high);
	#endif

	int length = high - low + 1;
	int U[length];

	int i = low;
	int j = mid+1;
	int k = 0;
	int x;
	while( i <= mid && j <= high){
		if(S[i] < S[j]){
			U[k] = S[i];
			i++;
			//printf("i<j = %d\n", U[k]);
		}
		else{
			U[k] = S[j];
			//printf("else (%d) = %d\n", j ,U[k]);
			j++;
			
		}
		k++;
	}

	if(i > mid){
		for( x = j; x <= high; x++) {
			U[k] = S[x];
			k++;
			//printf("U[%d] = %d\n", k,U[k]);
		}
	}

	else{
		for( x = i ; x <= mid; x++){
			U[k] = S[x] ;
			k++;
			//printf("else U[%d] = %d\n", k,U[k]);
		}
	}

	for( x = 0; x < length ; x++){
		S[x+low] = U[x];
		//printf("S[%d] = %d\n", x+low, U[x]);
	}

};

void mergesort(int low,int high){
	int mid;
	if (low < high){
		mid = (low + high)/2;

		
		mergesort(low, mid);
		mergesort(mid+1, high);
		merge(low, mid,high);
	}

};

int main(int* argc, char ** argv){
	
	int size = sizeof(S)/sizeof(S[0]);
	mergesort(0, size-1);
	//printf("size of S = %d\n", size);
	int idx;
	for(idx = 0; idx < size; idx++){
		printf("S[%d] = %d\n", idx, S[idx]);
	}
}