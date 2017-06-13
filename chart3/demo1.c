#include<stdio.h>
int main(void){
	float weight,value;
	printf("please input your weight:");
	scanf("%f",&weight);
	value = 100 * weight;
	printf("your weight is $%.3f. \n",value);
	return 0;
}
