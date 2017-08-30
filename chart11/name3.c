#include <stdio.h>
#define MAX 81
int main(void){
	char name[MAX];
	char * ptr;

	printf("Hi,what is your name?\n");
	ptr = fgets(name,MAX,stdin);
	printf("%s Ah! %s",name,ptr);
	return 0;
}