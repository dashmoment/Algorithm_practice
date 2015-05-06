#include <stdio.h>
#include "matrix.h"

#define DEBUG 1
#ifdef DEBUG
#define PRINT(str,arg) printf(str,arg);
#define PRINT_S(str) printf(str);
#else
#define PRINT(str,arg);
#define PRINT_S(str);
#endif

void indentity(float buf[], int m, int n){
	//int array[m*n];
	int i, j;
	int k = 0;

	for(i = 0 ; i < m ; i++){
		for(j = 0; j < n ; j++){
			if( i == j ){
				buf[ k*m+j]= 1;
			}
			else{
				buf[k*m+j] = 0;
			}

			PRINT("[%f] \t", buf[k*m+j]);
		}

		k+=1;

		PRINT_S("\n");

	}

}