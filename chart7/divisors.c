#include <stdio.h>
#include <stdbool.h>
int main(void){
	unsigned long num;
	unsigned long div;
	bool isPrime;

	printf("please enter the num:");
	while(scanf("%lu",&num) == 1){
		for(div = 2,isPrime = true;(div*div) <= num;div++){
			if(num % div == 0){
				if(div * div != num){
					printf("%lu divised by %lu and %lu\n",num,div,num/div);
				} else {
					printf("%lu divised by %lu\n",num,div);
				}
				isPrime =false;
			}
		}
		if(isPrime){
			printf("%lu is Prime\n",num);
		}
		printf("please enter another integer:");
	}
	printf("Bye!\n");
	return 0;
}