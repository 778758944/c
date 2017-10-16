#include <stdio.h>
#define TWO 2
#define OW "Consi is \
a apple"
#define FOUR TWO * TWO
#define PX printf("X is %d.\n", x);
#define FMP "X is %d. \n"

int main(void){
	int x = TWO;
	PX;

	x = FOUR;
	printf(FMP, x);

	printf("%s\n", OW);
	printf("TWO: OW\n");

	return 0;
}