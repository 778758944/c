#include <stdio.h>
#define NEW(X) (X + 5)

int main(void){
	int a = 1;
	a = NEW(a);
	printf("a = %d\n",a);

	int b = 3;
	b = NEW(b) * 2;
	printf("b = %d\n",b);
	return 0;
}