#include <stdio.h>
#include "hotel.h"
int menu(void){
	int code,status;
	printf("\n%s%s\n",STARS,STARS);
	printf("Enter the number of the desired hotel:\n");
	printf("1)ff arm 2)Hotel Olympic\n");
	printf("3)cc palaza 4)the stockton\n");
	printf("5) quit\n");
	printf("%s%s\n",STARS,STARS);

	while((status = scanf("%d",&code)) != 1 || (code > 5 || code < 1)){
		if(status != 1){
			scanf("%*s");
		}
		printf("enter an number between 1 and 5 please\n");
	}

	return code;
}


int getnights(void){
	int nights;

	printf("How many nights are need?\n");
	while(scanf("%d",&nights) != 1){
		scanf("%*s");
		printf("please enter a int\n");
	}
	return nights;
}

void showprice(double rate,int nights){
	int n;
	double total = 0.0;
	double factor = 1.0;
	for(n = 1;n <= nights;n++,factor *= DISCOUNT){
		total += rate*factor;
	}
	printf("the total cost will be $%0.2f\n",total);
}








