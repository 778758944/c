#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int comp(const void *, const void *);
void showArr(int arr[], int size);

int main(void){
	int arr[SIZE] = {3, 1, 5, 2, 4};
	showArr(arr, SIZE);
	qsort(arr, SIZE, sizeof(int), comp);
	showArr(arr, SIZE);
	return 0;
}

void showArr(int arr[], int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d", arr[i]);
	}
	putchar('\n');
}


int comp(const void * a, const void * b){
	int *x = (int *)  a;
	int *y = (int *)  b;

	if(*x > *y){
		return 1;
	} else if(*x < *y){
		return -1;
	} else {
		return 0;
	}

}
