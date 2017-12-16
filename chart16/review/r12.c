#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
	double a = atof(argv[1]);/*atof 没接触过*/
	if(a > 0){
		printf("the square root of %f is %0.2f\n", a, sqrt(a));
	}
	return 0;
}