#include <stdio.h>
#define FUNDLEN 20
struct fund {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(struct fund *fp);
double sum2(struct fund f);

int main(void){
	struct fund f = {
		"messi",
		10.01,
		"jack",
		11.05
	};

	printf("sum is $%0.2f\n",sum(&f));
	printf("sum is $%0.2f\n",sum2(f));
	return 0;
}

double sum(struct fund * f){
	return (f->bankfund + f->savefund);
}

double sum2(struct fund f){
	return (f.savefund + f.bankfund);
}