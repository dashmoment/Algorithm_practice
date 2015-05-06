#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char *str;
	char *ptr;
	const char *msg_0 = "test ";
	const char *msg_1 = "sprintf fine!";

	str = malloc(sizeof(char));
	ptr = str;   //ptr point to the head to msg list
	printf("1 ptr of str = %p\n", str);   // addr of head of msg list

	sprintf(str, "%s", msg_0);
	str += strlen(msg_0);
	sprintf(str, "%s", msg_1);
	str += strlen(msg_1); //str point to end of msg  list to make new msge can be added to str 

	printf("2 ptr of str = %p\n", str); // addr of end of msg list
	

	//test %c and %s, if use %c, the reuslt will be the first char of string which ptr point to
	// use %s, then entire string can be print out!!!
	printf("result = %c\n", *ptr);
	printf("result = %s\n", (char*)ptr);
}
