#include <stdio.h>
int imax(int,int);

int main(void){
	printf("the max of 3 ang 5 is %d\n",imax(3,5));
	printf("the max of 3 ang 5 is %d\n",imax(3.0,5.0));
	return 0;
}

int imax(int a, int b){
	return a > b ? a:b;
}