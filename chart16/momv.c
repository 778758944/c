#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10
void show_arr(int ar[], int size);

int main(void){
	int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int target[SIZE];
	double curious[SIZE/2] = {1.0, 2.0, 3.0, 4.0, 5.0};

	puts("memcy used");
	puts("show origin data");

	show_arr(values, SIZE);
	memcpy(target, values, SIZE * sizeof(int));
	puts("show target");
	show_arr(target, SIZE);

	puts("use memncpy");
	memmove(values+2, values, 5 * sizeof(int));
	puts("show target");
	show_arr(values, SIZE);

	puts("double to int");
	memcpy(target, curious, 5 * sizeof(double));
	puts("show target");
	show_arr(target, SIZE);
	return 0;
}



void show_arr(int ar[], int size){
	int i;
	for(i = 0; i < size; i++)
		printf("%d,", ar[i]);
	printf("\n");
}