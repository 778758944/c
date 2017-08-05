#include <stdio.h>
int main(void){
	int ultra = 0, super = 0;
	while(super < 5){
		super++;
		++ultra;
		printf("super is %d,ultra is %d\n",super,ultra);
	}
	return 0;
}