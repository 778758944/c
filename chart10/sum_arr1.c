#include <stdio.h>
#define SIZE 10
int sum(int *, int);
int sump(int *,int *);
int main(void){
	int marbles[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int anwser;

	anwser = sump(marbles,marbles+SIZE);

	printf("total is %d\n",anwser);
	printf("the size of marbles is %zd bytes\n",sizeof marbles);

	return anwser;
}

int sum(int * at,int n){
	int index;
	int total = 0;
	int a = 1;
	for(index = 0; index < n; index++)
		total += at[index];

	printf("The size of ar is %zd bytes.\n",sizeof at);
	printf("The size of a is %zd bytes.\n",sizeof a);
	return total;
}

int sump(int * start,int * end){
	int total = 0;
	while(start < end){
		total += *start++;
	}
	return total;
}




































