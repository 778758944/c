#include <stdio.h>
#define MAX 81
int main(void){
	char name[81];
	char * ptr;

	printf("Hi what is your name?\n");
	ptr = gets(name);
	printf("%s Ah! %s!\n",name,ptr);
	return 0;
}