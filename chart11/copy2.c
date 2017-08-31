#include <stdio.h>
#include <string.h>
#define WORDS "beats"
#define SIZE 40
int main(void){
	char * orig = WORDS;
	char copy[SIZE] = "Be the best that you can be";
	char * ps;

	puts(orig);
	puts(copy);
	ps = strcpy(copy + 7,orig);
	puts(ps);
	puts(copy);
	return 0;
}