#include <stdio.h>
int main(void){
	int a[2] = {1,2};

	int * const ptr = a;
	// *ptr = 3;
	ptr = &a[1];
	printf("*ptr = %d, ptr[1] = %d\n",*ptr,ptr[1]);
}