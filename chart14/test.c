#include <stdio.h>
int getSum(int, int);

int main(void){
	printf("getSum add is %p\n", &getSum);
	return 0;
}

int getSum(int x, int y){
	return x+y;
}