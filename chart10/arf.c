#include <stdio.h>
#define SIZE 5
void show_array(const double ar[],int n);
void multi_array(double ar[],int n,double multi);
int main(void){
	double dip[SIZE] = {20.0,17.66,8.2,15.3,22.22};
	printf("The orgin dip is:\n");
	show_array(dip,SIZE);
	multi_array(dip,SIZE,2.5);
	printf("The dip array after calling multi:\n");
	show_array(dip,SIZE);

	return 0;
}

void show_array(const double ar[],int n){
	int index;
	for(index = 0; index < n; index++){
		printf("the %d is %8.3f\n",index+1,ar[index]);
	}
}

void multi_array(double ar[],int n,double multi){
	for(int index = 0; index < n; index++){
		ar[index] *= multi;
	}
}