#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LIMIT 80
void ToUpper(char *);
int PounctCount(const char *);
int main(void){
	char line[LIMIT];

	puts("please enter a line:\n");
	gets(line);
	ToUpper(line);
	puts(line);
	printf("this line has %d punts\n",PounctCount(line));
	return 0;
}

void ToUpper(char *str){
	while(*str){
		*str = toupper(*str);
		str++;
	}
}

int PounctCount(const char *str){
	int ct = 0;
	while(*str){
		if(ispunct(*str))
			ct++;
		str++;
	}

	return ct;
}