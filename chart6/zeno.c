#include <stdio.h>
int main(void){
	int t_ct;//计数项目
	double time,x;
	int limit;

	printf("Enter the number of terms you want:");
	scanf("%d",&limit);
	for(t_ct=1,x=1,time=0;t_ct<=limit;t_ct++,x*=2){
		time += 1.0/x;
		printf("time = %f when terms = %d.\n",time,t_ct);
	}
	return 0;
}