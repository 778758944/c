#include <stdio.h>
#define MAX 81
int main(void){
	char name[MAX];
	printf("Hi,what is your name?");
	gets(name);
	printf("Nice name, %s\n",name);
	return 0;
}