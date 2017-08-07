#include <stdio.h>
#define COVERAGE 200
int main(void){
	int sq_feet;
	int cans;

	printf("enter coverage:");
	while(scanf("%d",&sq_feet) == 1){
		cans = sq_feet/COVERAGE;
		cans += (sq_feet%COVERAGE) > 0 ? 1:0;
		printf("you need %d %s\n",cans,cans>1 ? "cans":"can");
	}

	return 0;
}