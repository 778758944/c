#include <stdio.h>
#define MAX(X, Y) X > Y ? X : Y
#define EVENT_GT(X, Y) (X % 2 == 0) && (X > Y) && 1  

int main(void){
	int a = 5, b = 8;
	printf("max is %d\n", MAX(5, 3));
	printf("%d\n", EVENT_GT(b, a));
	return 0;
}