#include <stdio.h>
int main(void){
	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("enter the first score:");
	while(scanf("%f",&score) == 1){
		if(score < MIN || score > MAX){
			printf("%0.1f is an invalid value,try again:",score);
			continue;
		}
		printf("Accpeting %0.f\n",score);
		min = (score < min) ? score : min;
		max = (score > max) ? score: max;
		total += score;
		n++;
		printf("Enter next score (q to quit):");
	}

	if(n>0){
		printf("Average of %d scores is %0.1f",n,total/n);
		printf("low is %0.1f,high is %0.1f\n",min,max);
	} else {
		printf("No valid scores entered\n");
	}

	return 0;
}