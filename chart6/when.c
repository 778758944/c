#include <stdio.h>
int main(void){
	int n = 5;
	while (n < 7){
		printf("n = %d\n",n);
		n++;
		printf("Now n = %d\n",n);
	}
	printf("the loop is finished\n");
	return 0;
}