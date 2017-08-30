#include <stdio.h>
#include <string.h>
void fit(char *, unsigned int);

int main(void){
	char mesg[] = "Hold on to your hats, hackers";

	puts(mesg);
	fit(mesg, 7);
	puts(mesg);
	printf("let look at some more of the string\n");
	puts(mesg+8);
	return 0;
}

void fit(char * str, unsigned int size){
	if(strlen(str) > size){
		*(str+size) = '\0';
	}
}