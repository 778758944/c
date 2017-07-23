#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void){
	double shoe,foot;
	shoe = 9.0;
	foot = SCALE*shoe + ADJUST;
	printf("shoe size foot length\n");
	printf("%10.2f is %15.2f\n",shoe,foot);
	return 0;
}