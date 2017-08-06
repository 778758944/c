#include <stdio.h>
int main(void){
	int secret_code = 13;
	int code_enter;

	do{
		printf("please enter code:");
		scanf("%d",&code_enter);
	} while(code_enter != secret_code);
	printf("loop finished\n");
	return 0;
}