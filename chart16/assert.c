#include <stdio.h>
#include <math.h>
#define NDEBUG
#include <assert.h>

int main(void){
	double x, y, z;
	printf("please enter two number\n");

	while(scanf("%lf%lf", &x, &y) == 2 && (x != 0 && y != 0)){
		z = x*x - y*y;
		assert(z >= 0);
		printf("z sqrt is %.2f\n", sqrt(z));
		puts("Next pair of number");
	}

	puts("done");
	return 0;
}