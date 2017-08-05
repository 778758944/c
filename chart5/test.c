#include <stdio.h>
int main(void){
	int a, b;
	a = 5%2;
	b = -5%-2;
	printf("a is %d,b is %d\n",a,b);

	int c = 0;
	while(c++ < 10){
		printf("c = %d\n",c);
	}
	return 0;
}