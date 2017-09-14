#include <stdio.h>
#define FUNDLEN 50
struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(double, double);

int main(void){
	struct funds stan = {
		"kk",
		3024.72,
		"lucy save",
		9237.11
	};

	printf("Stan has a total of $%.2f\n",sum(stan.bankfund, stan.savefund));
	return 0;
}

double sum(double bankfund, double savefund){
	return (bankfund + savefund);
}