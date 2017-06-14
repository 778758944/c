#include<stdio.h>
int main(void){
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	float toobig = 3.4e38*100.0f;
	printf("%f can be written %e\n",aboat,aboat);
	printf("%f can be written %e\n",abet,abet);
	printf("%Lf can be written %Lf\n",dip,dip);
	printf("%e \n",toobig);
	return 0;
}
