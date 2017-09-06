#include <stdio.h>
int units = 0;
void critic(void);

int main(void){
	extern int units;
	printf("please enter an number:\n");
	scanf("%d",&units);
	while(units != 56){
		critic();
	}
	printf("you must have looked it up\n");
	return 0;
}

void critic(void){
	printf("No lucky\n");
	scanf("%d",&units);
}