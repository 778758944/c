#include <stdio.h>
int main(void){
	unsigned width,precision;
	int number = 256;
	double weight = 242.5;

	printf("What field width:");
	scanf("%d",&width);
	// printf("width is %u\n",width);
	printf("format number is %*dhahahah\n",width,number);
	printf("now enter a width and a precision:");
	scanf("%d %d",&width,&precision);
	printf("Weight = %*.*f\n",width,precision,weight);
	return 0;

}