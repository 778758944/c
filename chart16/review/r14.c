#include <stdlib.h>
#include <string.h>
#include "./r14.h"
void memcmpy(double * data1, double * data2, int size, int cursor){
	memcpy(data1, data2+cursor, size * sizeof(double));
}

void showArr(double arr[], int size){
	int i;
	for(i = 0; i < size; i++)
		printf("%.2f ", arr[i]);
	putchar('\n');
}