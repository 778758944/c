#include <stdio.h>
#define MIN 11
int main(void){
	#ifdef MAX
		printf("max is %d\n", MAX);
	#else
		printf("min is %d\n", MIN);
	#endif

	return 0;
}