#include <stdio.h>
#define SQUARES 64
#define CROPS 1E15
int main(void){
	double current, total;
	int count = 1;
	printf("squares grains total ");
	printf("fraction of \n");
	printf("     added   grains   ");
	printf("US total\n");
	total = current = 1.0;
	printf("%4d %13.3e %12.2e %12.2e\n",count,current,total,total/CROPS);
	while(count<SQUARES){
		count += 1;
		current = 2.0*current;
		total = total+current;
		printf("%4d %13.3e %12.2e %12.2e\n",count,current,total,total/CROPS);
	} 
	return 0;
}