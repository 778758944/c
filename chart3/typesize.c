#include<stdio.h>
int main(void){
	printf("Type int size is %lu\n",sizeof(int));
	printf("Type char size id %lu\n",sizeof(char));
	printf("Type long size is %lu\n",sizeof(long));
	printf("Type double has size of %lu\n",sizeof(double));
	printf("Type short size is %lu\n",sizeof(short));
	printf("Type bool size is %lu\n",sizeof(_Bool));
	return 0;
}
