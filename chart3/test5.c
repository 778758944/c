#include<stdio.h>
int main(void){
	int year;
	float seconds = 3.156e7;
	printf("please enter your age");
	printf(" __\b\b");
	scanf("%d",&year);
	printf("your seconds is %e s\n",year*seconds);
	return 0;
}
