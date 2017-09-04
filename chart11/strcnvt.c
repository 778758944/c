#include <stdio.h>
#include <stdlib.h>

int main(void){
	char number[30];
	char *end;
	long value;

	puts("enter a number :\n");
	while(gets(number) && number[0] != '\0'){
		value = strtol(number,&end,10);
		printf("value: %ld, stopped at %s(%d)\n",value,end,*end);

		value = strtol(number,&end,16);
		printf("value: %ld, stopped at %s(%d)\n",value,end,*end);

		puts("next number:");
	}

	puts("bye!\n");
	return 0;
}