#include <stdio.h>
int main(void){
	char ch;

	printf("please enter a letter:");
	while((ch = getchar()) != '#'){
		putchar(ch);
		printf("\nPlease enter again:");
	}

	return 0;
}