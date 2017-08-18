#include <stdio.h>
void to_binary(unsigned long n);

int main(void){
	unsigned long number;

	printf("enter an int:\n");

	while(scanf("%ld",&number) == 1){
		printf("binary equivalent:");
		to_binary(number);
		putchar('\n');
		printf("enter an int again:\n");
	}
	printf("done");
	return 0;
}

void to_binary(unsigned long n){
	int r;
	r = n%2;

	if(n >= 2){
		to_binary(n/2);
	}

	putchar('0'+r);

	return;
}