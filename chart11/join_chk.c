#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
int main(void){
	char flower[SIZE];
	char addon[] = "s smel";
	char bug[BUGSIZE];
	int available;

	puts("What is your favourite flower?");
	gets(flower);
	if(strlen(flower) + strlen(addon) + 1 <= SIZE)
		strcat(flower,addon);
	puts(flower);
	puts("what is your favourite bug?");
	gets(bug);
	available = BUGSIZE - strlen(bug);
	printf("%d\n",available);
	strncat(bug,addon,available);
	puts(bug);

	return 0;
}