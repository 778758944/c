#include <stdio.h>
#include <math.h>
int main(void){
	const double ANWSER = 3.14159;
	double response;
	printf("please enter pi:");
	scanf("%lf",&response);
	while(fabs(response-ANWSER) > 0.0001){
		printf("Try again!\n");
		scanf("%lf",&response);
	}
	printf("Close enough\n");
	return 0;
}