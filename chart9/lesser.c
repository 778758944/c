#include <stdio.h>
int imin(int,int);

int main(void){
	int evil1, evil2;

	printf("please enter a pair of ints:");
	while(scanf("%d %d",&evil1,&evil2) == 2){
		printf("evil1 is %d,evil2 is %d,the min is %d\n",evil1,evil2,imin(evil1,evil2));
		printf("enter again:");
	}

	printf("Bye\n");
}

int imin(int n,int m){
	int min;

	if(n > m)
		min = m;
	else
		min = n;

	return min;
}