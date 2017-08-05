#include <stdio.h>
int main(void){
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	printf("n is size of %lu,and int is sizeof %lu\n",sizeof(n),intsize);
	printf("char is %lu\n",sizeof(char));
	return 0;
}