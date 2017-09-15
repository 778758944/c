#include <stdio.h>
#include <stdlib.h>

struct flex {
	int count;
	double average;
	double scores[];
};

void showFlex(const struct flex * fp);

int main(void){
	struct flex * pf1;
	int n = 5;
	int i;
	double tot;

	pf1 = malloc(sizeof(struct flex)+sizeof(double)*n);

	for(i = 0; i < n; i++){
		pf1->scores[i] = 20.0-i;
		tot += pf1->scores[i];
	} 

	pf1->average = tot/n;
	pf1->count = n;
	showFlex(pf1);
	free(pf1);
	return 0;
}


void showFlex(const struct flex * pf1){
	printf("average is %0.2f\n",pf1->average);
}
