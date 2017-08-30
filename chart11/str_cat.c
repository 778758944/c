#include <stdio.h>
#include <string.h>
int main(void){
	char flower[81];
	char addon[] = "s smell like old shoes";

	puts("What is your favourite flowers?");
	gets(flower);
	strcat(flower,addon);
	puts(flower);
	puts(addon);
	return 0;
}