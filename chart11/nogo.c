#include <stdio.h>
#include <string.h>
#define ANWSER "Grant"
int main(void){
	char try[40];

	puts("who is buried in Grant tomb?");
	gets(try);
	while(strcmp(try,ANWSER) != 0){
		puts("No,that is wrong. Try again");
		gets(try);
	}
	puts("That is right");
	return 0;
}