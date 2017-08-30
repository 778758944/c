#include <stdio.h>
void put1(const char *);
int put2(const char *);

int main(void){
	put1("If I do as much money");
	put1(" as I could spend,\n");
	printf("I count %d characters.\n",put2("I never would cry old chairs to mend"));
	return 0;
}

void put1(const char * str){
	while(*str){
		putchar(*str++);
	}
}

int put2(const char * str){
	int n = 0;
	while(*str){
		putchar(*str++);
		n++;
	}
	putchar('\n');
	return n;
}