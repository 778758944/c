#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void){
	int index,score[SIZE];
	int sum = 0;
	float averge;

	printf("enter %d golf scores:\n",SIZE);
	for(index = 0;index < SIZE;index++)
		scanf("%d",&score[index]);
	printf("scores read as follows:\n");
	for(index = 0;index < SIZE;index++)
		printf("%5d",score[index]);
	printf("\n");
	for(index = 0;index < SIZE;index++){
		sum += score[index];
	}
	averge = sum/SIZE;
	printf("Sum is %d\n",sum);
	printf("averge is %.2f\n",averge);
	return 0;
}