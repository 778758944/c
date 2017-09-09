#include <stdio.h>
extern int rand0(void);
extern void srand1(unsigned int);

int main(void){
	int count;
	unsigned int seed;
	printf("enter your seed?\n");
	while(scanf("%u",&seed) == 1){
		srand1(seed);
		for(count = 0; count < 5; count++)
			printf("%d\n",rand0());
		printf("please enter the seed or q to quit");
	}
	return 0;
}