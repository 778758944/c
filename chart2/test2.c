#include<stdio.h>
void one(void);
void two(void);
int main(void){
	printf("start now\n");
	one();
	printf("done \n");
	return 0;
	
}

void one(void){
	printf("one \n");
	two();
	printf("three \n");
}

void two(void){
	printf("two\n");
}
