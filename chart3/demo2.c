#include<stdio.h>
int main(void){
	int x = 100;
	int i = -2147483647;
	unsigned int j = 4294967295;
	int a = 123456789009876;
	printf("%d\n",a);
	printf("%d,%d,%d\n",i,i-1,i-2);
	printf("%u,%u,%u\n",j,j+1,j+2);
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n",x,x,x);
	return 0;
}
