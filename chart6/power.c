#include <stdio.h>
double power(double n,int p);
int main(void){
	double x,xpow;
	int p;
	printf("please enter x and p\n");
	while(scanf("%d%lf",&p,&x) == 2){
		xpow = power(x,p);
		printf("xpow is %.5g\n",xpow);
		printf("enter again");
	}
	return 0;
}

double power(double n,int p){
	double pow = 1;
	for(int i = 1;i<=p;i++){
		pow *= n;
	}
	return pow;
}