#include <stdio.h>
#define MONTHS 12

int main(void){
	const int day[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int index;

	for(index = 0; index < MONTHS; index++){
		printf("Month %2d is %2d days\n",index+1,*(day+index));
	}

	return 0;
}