#include <stdio.h>
void interchage(int * u,int * v);
int main(void){
	int x = 5, y = 10;
	printf("Originnaly x = %d,y = %d\n",x,y);
	interchage(&x,&y);
	printf("Now x = %d,y = %d\n",x,y);
	return 0;
}

void interchage(int * u,int * v){
	int temp = *u;
	*u = *v;
	*v = temp;
}