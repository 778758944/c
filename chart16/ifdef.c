#include <stdio.h>
// #define JUST_CHECKING
#define LIMIT 4

int main(void){
	int i, total = 0;

	for(i = 0; i < LIMIT; i++){
		total += 2*i*i + 1;
		#ifdef JUST_CHECKING
			printf("running total is %d\n", total);
		#endif
	}

	printf("Grnad total is %d\n", total);

	return 0;
}
