#include <stdio.h>
int main(void){
	long num;
	long sum = 0L;
	_Bool input_is_good;

	printf("please enter an integer to be summed");
	printf("q to quit):");
	input_is_good = (scanf("%ld",&num) == 1);
	while (input_is_good){
		sum = sum + num;
		printf("please enter next num(q to quit):");
		input_is_good = (scanf("%ld",&num) == 1);
		// status = scanf("%ld",&num);
		// printf("status %d\n",status);//成功赋值返回读入项目的个数，不成功返回0
	}
	printf("those integer totally to sum %ld\n",sum);
	return 0;
}