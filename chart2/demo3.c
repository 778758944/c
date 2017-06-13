#include<stdio.h>
void butler(void);
int main(void){
	printf("i will call butler function");
	butler();
	return 0;
}

void butler(void)
{
	printf("butler is called");
}
